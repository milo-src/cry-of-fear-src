
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100deff0 <.text+0xddff0>:
100deff0:	55                   	push   ebp
100deff1:	8b ec                	mov    ebp,esp
100deff3:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100deff7:	8b d1                	mov    edx,ecx
100deff9:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100deffc:	75 24                	jne    0x100df022
100deffe:	81 88 a8 01 00 00 00 	or     DWORD PTR [eax+0x1a8],0x1000
100df005:	10 00 00 
100df008:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
100df00b:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100df012:	10 
100df013:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100df018:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100df01d:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100df020:	eb 0a                	jmp    0x100df02c
100df022:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xffffefff
100df029:	ef ff ff 
100df02c:	80 ba d0 1e 00 00 00 	cmp    BYTE PTR [edx+0x1ed0],0x0
100df033:	74 11                	je     0x100df046
100df035:	c6 82 d0 1e 00 00 00 	mov    BYTE PTR [edx+0x1ed0],0x0
100df03c:	c7 82 cc 1e 00 00 00 	mov    DWORD PTR [edx+0x1ecc],0x0
100df043:	00 00 00 
100df046:	5d                   	pop    ebp
100df047:	c2 04 00             	ret    0x4
