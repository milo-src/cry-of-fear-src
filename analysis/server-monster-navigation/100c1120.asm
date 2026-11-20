
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1120 <.text+0xc0120>:
100c1120:	55                   	push   ebp
100c1121:	8b ec                	mov    ebp,esp
100c1123:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c1128:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c112b:	89 81 d0 02 00 00    	mov    DWORD PTR [ecx+0x2d0],eax
100c1131:	f3 0f 11 81 c0 02 00 	movss  DWORD PTR [ecx+0x2c0],xmm0
100c1138:	00 
100c1139:	c7 81 b8 02 00 00 01 	mov    DWORD PTR [ecx+0x2b8],0x1
100c1140:	00 00 00 
100c1143:	e8 68 cc ff ff       	call   0x100bddb0
100c1148:	5d                   	pop    ebp
100c1149:	c2 08 00             	ret    0x8
