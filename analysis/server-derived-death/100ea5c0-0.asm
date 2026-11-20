
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ea5c0 <.text+0xe95c0>:
100ea5c0:	55                   	push   ebp
100ea5c1:	8b ec                	mov    ebp,esp
100ea5c3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100ea5c6:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
100ea5ca:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100ea5cf:	89 81 10 23 00 00    	mov    DWORD PTR [ecx+0x2310],eax
100ea5d5:	0f 95 c0             	setne  al
100ea5d8:	88 81 1c 23 00 00    	mov    BYTE PTR [ecx+0x231c],al
100ea5de:	f3 0f 11 81 20 23 00 	movss  DWORD PTR [ecx+0x2320],xmm0
100ea5e5:	00 
100ea5e6:	c7 81 14 23 00 00 01 	mov    DWORD PTR [ecx+0x2314],0x1
100ea5ed:	00 00 00 
100ea5f0:	5d                   	pop    ebp
100ea5f1:	c2 0c 00             	ret    0xc
