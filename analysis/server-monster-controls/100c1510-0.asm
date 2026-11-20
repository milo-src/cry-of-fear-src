
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1510 <.text+0xc0510>:
100c1510:	55                   	push   ebp
100c1511:	8b ec                	mov    ebp,esp
100c1513:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c1518:	83 ec 0c             	sub    esp,0xc
100c151b:	8b 01                	mov    eax,DWORD PTR [ecx]
100c151d:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100c1523:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c1528:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100c152e:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c1533:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c1538:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100c153b:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
100c1541:	5d                   	pop    ebp
100c1542:	c2 18 00             	ret    0x18
