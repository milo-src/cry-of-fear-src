
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c10d0 <.text+0xc00d0>:
100c10d0:	55                   	push   ebp
100c10d1:	8b ec                	mov    ebp,esp
100c10d3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c10d6:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c10db:	89 81 d0 02 00 00    	mov    DWORD PTR [ecx+0x2d0],eax
100c10e1:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100c10e4:	f3 0f 11 81 c0 02 00 	movss  DWORD PTR [ecx+0x2c0],xmm0
100c10eb:	00 
100c10ec:	c7 81 b8 02 00 00 20 	mov    DWORD PTR [ecx+0x2b8],0x20
100c10f3:	00 00 00 
100c10f6:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100c10fa:	66 0f d6 81 c4 02 00 	movq   QWORD PTR [ecx+0x2c4],xmm0
100c1101:	00 
100c1102:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100c1105:	89 81 cc 02 00 00    	mov    DWORD PTR [ecx+0x2cc],eax
100c110b:	e8 a0 cc ff ff       	call   0x100bddb0
100c1110:	5d                   	pop    ebp
100c1111:	c2 0c 00             	ret    0xc
