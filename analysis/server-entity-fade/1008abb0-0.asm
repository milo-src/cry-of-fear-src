
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008abb0 <.text+0x89bb0>:
1008abb0:	f3 0f 10 0d e0 79 1b 	movss  xmm1,DWORD PTR ds:0x101b79e0
1008abb7:	10 
1008abb8:	56                   	push   esi
1008abb9:	8b f1                	mov    esi,ecx
1008abbb:	51                   	push   ecx
1008abbc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008abbf:	f3 0f 10 80 50 01 00 	movss  xmm0,DWORD PTR [eax+0x150]
1008abc6:	00 
1008abc7:	0f 2f c1             	comiss xmm0,xmm1
1008abca:	76 1a                	jbe    0x1008abe6
1008abcc:	f3 0f 5c c1          	subss  xmm0,xmm1
1008abd0:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1008abd7:	f3 0f 11 80 50 01 00 	movss  DWORD PTR [eax+0x150],xmm0
1008abde:	00 
1008abdf:	8b 06                	mov    eax,DWORD PTR [esi]
1008abe1:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008abe4:	5e                   	pop    esi
1008abe5:	c3                   	ret
1008abe6:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
1008abed:	00 00 00 
1008abf0:	8b 06                	mov    eax,DWORD PTR [esi]
1008abf2:	c7 04 24 cd cc 4c 3e 	mov    DWORD PTR [esp],0x3e4ccccd
1008abf9:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008abfc:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1008ac03:	5e                   	pop    esi
1008ac04:	c3                   	ret
