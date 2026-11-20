
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1080 <.text+0xc0080>:
100c1080:	55                   	push   ebp
100c1081:	8b ec                	mov    ebp,esp
100c1083:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c1086:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c108b:	89 81 d0 02 00 00    	mov    DWORD PTR [ecx+0x2d0],eax
100c1091:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100c1094:	f3 0f 11 81 c0 02 00 	movss  DWORD PTR [ecx+0x2c0],xmm0
100c109b:	00 
100c109c:	c7 81 b8 02 00 00 40 	mov    DWORD PTR [ecx+0x2b8],0x40
100c10a3:	00 00 00 
100c10a6:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100c10aa:	66 0f d6 81 c4 02 00 	movq   QWORD PTR [ecx+0x2c4],xmm0
100c10b1:	00 
100c10b2:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100c10b5:	89 81 cc 02 00 00    	mov    DWORD PTR [ecx+0x2cc],eax
100c10bb:	e8 f0 cc ff ff       	call   0x100bddb0
100c10c0:	5d                   	pop    ebp
100c10c1:	c2 0c 00             	ret    0xc
