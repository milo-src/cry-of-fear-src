# Studio replacement texture upload and framebuffer copies

Static analysis of original client.dll, 2026-11-20. SHA256:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
The game/DLL was not executed. GL API names were first reconstructed from
enums/signatures; the later renderer-bootstrap-contract.md and
native-gl-dispatch-map.json now prove their GetProcAddress assignments.
No image-output equivalence is claimed.

## TGA loader 10069630

Evidence: `decompiled/client/captures/graphics-studio-texture-lifecycle/005-pseudocode.c`.
Inputs are filename, mip mode, optional existing texture ID. The studio
replacement helpers use mip mode0 and a previously reserved ID. This loader
also has mode1/2 callers outside that immediate use.

The loader first requires10053c70 success (GL manager status==2), then calls
engine COM_LoadFile(filename,5,&fileSize) via101b2744. A missing file logs failure.
The data checks observed in this body are:

* TGA image type byte2 must equal2 and pixel depth byte16 must equal24.
* Both dimensions must fit GL_MAX_TEXTURE_SIZE queried through101be6b8.
* Width and height must each be one of16,32,64,128,256,512,1024.
* Total pixel count must be at most262144. Thus1024x1024 is rejected even if
  supported by the hardware; the RGB scratch capacity is786432 bytes.

Image bytes begin at18+IDLength. BGR triples are converted to RGB. When the TGA
descriptor bit0x20 is clear, rows are swapped vertically using a3072-byte row
scratch buffer. No horizontal-origin adjustment appears. The code does not
establish general color-map, alpha or compressed/RLE TGA support, nor a complete
input-length validation contract; do not treat it as a general image decoder.

The selected ID is existingID when nonzero, otherwise the next global ID at
1018fe8c. Level0 is uploaded as internal format3, RGB/UNSIGNED_BYTE. Magnification
is LINEAR. Minification is NEAREST for mode0/other values, or
LINEAR_MIPMAP_NEAREST for modes1/2. These are the actual enum values0x2600,
0x2601 and0x2701, not an inferred modern trilinear preference.

Modes1/2 repeatedly call10069f50 to reduce dimensions, halving each dimension
but keeping it at least1. Mode2 additionally calls1006a310 on each reduced level.
The original level0 is uploaded before that additional operation. Exact mip
equations and their edge cases are recorded below from the helper bodies.

The file buffer is released through COM_FreeFile101b274c on observed completed
load and rejection paths. The global ID counter advances only for an allocated
ID, not when an existingID was supplied. Assembly capture
`graphics-studio-texture-loader/008-procedure_assembly.json` confirms EAX returns
0 on rejection, the supplied ID on successful replacement, or the old counter
value on successful allocation (increment stored, then EAX decremented).

## Mip reducers 10069f50 and1006a310

Evidence: `graphics-studio-texture-loader/001-pseudocode.c`,002, and the existing
`shader-pass-vector-helpers/000-pseudocode.c` under `decompiled/client/captures`.
10069f50 packs RGB in place: each output channel is the unsigned sum of the
corresponding four bytes in a2x2 source block, shifted right2 (integer floor).
It has no gamma-space conversion, alpha channel or edge-weight adjustment.

An original corner case matters: this reducer executes only floor(height/2)
rows and floor(width/2) columns. Once either dimension is1 it performs no writes,
although its caller continues halving the other dimension and uploading the
unchanged scratch prefix. Rectangular mip tails therefore are not a correct
one-dimensional box filter. Square textures avoid this path before reaching1x1.

Mode2 then decodes each RGB triple as v = byte/127.0 -1.0, invokes100947c0 to
normalize it when its length is nonzero, and encodes each component as
byte(int((v+1.0)*127.0)). The divisor is127, not127.5 or128. A zero vector is left
zero by the normalizer and encodes as(127,127,127). This is the normal-vector
mip path, applied only to reduced levels; it does not normalize the input level0.

## Framebuffer-copy helpers 10064c10 and10064ac0

Evidence: `graphics-studio-texture-replacements/008-pseudocode.c` and009 in
`decompiled/client/captures`. The functions have identical capture mechanics
but distinct retained IDs/ready bytes:

| Helper | Destination ID | Ready | Mesh name/trigger |
|---|---|---|---|
|10064c10|104d26e8|104d26e5|cam_vfind; caller camera cvar gate|
|10064ac0|104d26f0|104d26e6|diffusegay; pending104ce4a1|

On first use they allocate a zeroed0x30000-byte CPU buffer, remember the current
TEXTURE_BINDING_2D, bind a reserved global ID, set LINEAR min/mag filters and
upload a256x256 RGB level0. They restore the old binding, free the CPU buffer,
assign the new ID and increment1018fe8c. This is lazy initialization, not a new
allocation on every mesh draw.

Each capture then saves the current binding in shared104d26ec and binds the
destination. It performs the operation with the glCopyTexImage2D signature:

```text
x = screenWidth/2  - requestedWidth/2
y = screenHeight/2 - requestedHeight/2
CopyTexImage2D(TEXTURE_2D, level0, RGB, x, y,
               requestedWidth, requestedHeight, border0)
ready = 1
```

Integer division is used. For a zero requested dimension its subtraction is
skipped, which is numerically equivalent to the expression above. The original
screen-size globals are1018f430/1018f434. The copy redefines level0 at requested
dimensions; it is not constrained to the initial256x256 allocation. No FBO,
second scene render, view transform, clipping to the viewport, mip generation,
pixel pack/readback buffer or GL-error check is visible in these two bodies.
The source is the currently selected read framebuffer at the call site. Its
complete render scheduling must be considered before assigning camera semantics.

The helpers leave their destination bound. In10065ef0 the cam_vfind branch sets
a local restoration flag, and the post-mesh code binds shared104d26ec. The flag
is initialized before the mesh loop, not per mesh. The diffusegay branch does
not independently set that flag. This distinction and shared previous-binding
storage are part of the observed contract, not a generalized push/pop GL state.

Exact reference captures009..013 in `graphics-studio-texture-loader` contained
only reads of screenWidth/screenHeight and dispatch101be670. The follow-up
renderer-bootstrap-contract.md closes their producers: engine GetScreenInfo
fills the HUD SCREENINFO structure, and manager GetProcAddress stores the named
glCopyTexImage2D pointer. Viewport origin/read-buffer selection remain open.
Texture-ID direct writes occur
only in their respective lazy initialization helpers; this does not exclude
indexed/bulk clearing. Capture lifecycle and TakePhoto100719f0 are documented
in `studio-texture-lifecycle-audit.md`.

## Installed resources corroboration

`studio-replacement-resource-inventory.json` records the35 concrete literal TGA
paths used by the clothing/hand/page helpers, their hashes and headers. All35
exist as loose installed files; each is512x512, uncompressed type2,24bpp,
descriptor0. This matches the loader's maximum262144-pixel RGB scratch and its
vertical-flip branch. The dynamic `_black.tga` text is a suffix, not a missing
standalone file. Custom user-selected paths and engine search-path fallback are
not covered by this bounded inventory. No original resource was modified.
