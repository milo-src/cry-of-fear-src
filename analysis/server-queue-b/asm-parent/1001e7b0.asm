
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001e7b0 <.text+0x1d7b0>:
1001e7b0:	55                   	push   ebp
1001e7b1:	8b ec                	mov    ebp,esp
1001e7b3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1001e7b6:	85 c0                	test   eax,eax
1001e7b8:	74 0f                	je     0x1001e7c9
1001e7ba:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1001e7bd:	85 c9                	test   ecx,ecx
1001e7bf:	74 08                	je     0x1001e7c9
1001e7c1:	8b 01                	mov    eax,DWORD PTR [ecx]
1001e7c3:	ff 90 4c 02 00 00    	call   DWORD PTR [eax+0x24c]
1001e7c9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001e7ce:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
1001e7d3:	f3 0f 11 05 fc 2d 22 	movss  DWORD PTR ds:0x10222dfc,xmm0
1001e7da:	10 
1001e7db:	5d                   	pop    ebp
1001e7dc:	c3                   	ret
