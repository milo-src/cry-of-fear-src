
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a120 <.text+0x119120>:
1011a120:	55                   	push   ebp
1011a121:	8b ec                	mov    ebp,esp
1011a123:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011a126:	83 f8 ff             	cmp    eax,0xffffffff
1011a129:	74 46                	je     0x1011a171
1011a12b:	3d f7 00 00 00       	cmp    eax,0xf7
1011a130:	75 15                	jne    0x1011a147
1011a132:	68 ec 57 1e 10       	push   0x101e57ec
1011a137:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1011a13d:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1011a140:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011a145:	eb 13                	jmp    0x1011a15a
1011a147:	68 fc 57 1e 10       	push   0x101e57fc
1011a14c:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1011a152:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1011a155:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011a15a:	83 c4 04             	add    esp,0x4
1011a15d:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1011a164:	9f                   	lahf
1011a165:	f6 c4 44             	test   ah,0x44
1011a168:	7b 07                	jnp    0x1011a171
1011a16a:	b8 01 00 00 00       	mov    eax,0x1
1011a16f:	5d                   	pop    ebp
1011a170:	c3                   	ret
1011a171:	33 c0                	xor    eax,eax
1011a173:	5d                   	pop    ebp
1011a174:	c3                   	ret
