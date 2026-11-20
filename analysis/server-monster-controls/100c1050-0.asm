
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1050 <.text+0xc0050>:
100c1050:	55                   	push   ebp
100c1051:	8b ec                	mov    ebp,esp
100c1053:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c1058:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c105b:	89 81 d0 02 00 00    	mov    DWORD PTR [ecx+0x2d0],eax
100c1061:	f3 0f 11 81 c0 02 00 	movss  DWORD PTR [ecx+0x2c0],xmm0
100c1068:	00 
100c1069:	c7 81 b8 02 00 00 02 	mov    DWORD PTR [ecx+0x2b8],0x2
100c1070:	00 00 00 
100c1073:	e8 38 cd ff ff       	call   0x100bddb0
100c1078:	5d                   	pop    ebp
100c1079:	c2 08 00             	ret    0x8
