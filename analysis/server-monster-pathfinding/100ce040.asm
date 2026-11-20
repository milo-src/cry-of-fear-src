
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ce040 <.text+0xcd040>:
100ce040:	55                   	push   ebp
100ce041:	8b ec                	mov    ebp,esp
100ce043:	8b d1                	mov    edx,ecx
100ce045:	8b 02                	mov    eax,DWORD PTR [edx]
100ce047:	83 f8 64             	cmp    eax,0x64
100ce04a:	75 11                	jne    0x100ce05d
100ce04c:	68 10 72 1d 10       	push   0x101d7210
100ce051:	e8 6a 1e 00 00       	call   0x100cfec0
100ce056:	83 c4 04             	add    esp,0x4
100ce059:	5d                   	pop    ebp
100ce05a:	c2 08 00             	ret    0x8
100ce05d:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100ce062:	f3 0f 11 44 c2 08    	movss  DWORD PTR [edx+eax*8+0x8],xmm0
100ce068:	8b 0a                	mov    ecx,DWORD PTR [edx]
100ce06a:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100ce06d:	89 44 ca 04          	mov    DWORD PTR [edx+ecx*8+0x4],eax
100ce071:	8b ca                	mov    ecx,edx
100ce073:	ff 02                	inc    DWORD PTR [edx]
100ce075:	e8 76 fd ff ff       	call   0x100cddf0
100ce07a:	5d                   	pop    ebp
100ce07b:	c2 08 00             	ret    0x8
