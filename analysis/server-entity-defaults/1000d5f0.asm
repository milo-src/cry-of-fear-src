
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d5f0 <.text+0xc5f0>:
1000d5f0:	55                   	push   ebp
1000d5f1:	8b ec                	mov    ebp,esp
1000d5f3:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1000d5f6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000d5f9:	f3 0f 10 81 78 01 00 	movss  xmm0,DWORD PTR [ecx+0x178]
1000d600:	00 
1000d601:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
1000d606:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1000d60a:	f3 0f 10 81 7c 01 00 	movss  xmm0,DWORD PTR [ecx+0x17c]
1000d611:	00 
1000d612:	f3 0f 58 41 0c       	addss  xmm0,DWORD PTR [ecx+0xc]
1000d617:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1000d61c:	f3 0f 10 81 80 01 00 	movss  xmm0,DWORD PTR [ecx+0x180]
1000d623:	00 
1000d624:	f3 0f 58 41 10       	addss  xmm0,DWORD PTR [ecx+0x10]
1000d629:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1000d62e:	5d                   	pop    ebp
1000d62f:	c2 04 00             	ret    0x4
