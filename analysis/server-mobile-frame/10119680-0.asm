
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119680 <.text+0x118680>:
10119680:	55                   	push   ebp
10119681:	8b ec                	mov    ebp,esp
10119683:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10119686:	85 c9                	test   ecx,ecx
10119688:	7e 25                	jle    0x101196af
1011968a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011968f:	3b 88 90 00 00 00    	cmp    ecx,DWORD PTR [eax+0x90]
10119695:	7f 18                	jg     0x101196af
10119697:	51                   	push   ecx
10119698:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
1011969e:	83 c4 04             	add    esp,0x4
101196a1:	85 c0                	test   eax,eax
101196a3:	74 0a                	je     0x101196af
101196a5:	83 38 00             	cmp    DWORD PTR [eax],0x0
101196a8:	75 05                	jne    0x101196af
101196aa:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
101196ad:	5d                   	pop    ebp
101196ae:	c3                   	ret
101196af:	33 c0                	xor    eax,eax
101196b1:	5d                   	pop    ebp
101196b2:	c3                   	ret
