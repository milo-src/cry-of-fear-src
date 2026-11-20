
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100176f0 <.text+0x166f0>:
100176f0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100176f3:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100176f9:	85 c9                	test   ecx,ecx
100176fb:	75 03                	jne    0x10017700
100176fd:	33 c0                	xor    eax,eax
100176ff:	c3                   	ret
10017700:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017705:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001770b:	03 c1                	add    eax,ecx
1001770d:	50                   	push   eax
1001770e:	6a 00                	push   0x0
10017710:	e8 7b 0e 10 00       	call   0x10118590
10017715:	83 c4 08             	add    esp,0x8
10017718:	c3                   	ret
