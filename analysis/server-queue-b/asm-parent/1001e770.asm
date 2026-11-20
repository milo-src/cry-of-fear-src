
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001e770 <.text+0x1d770>:
1001e770:	55                   	push   ebp
1001e771:	8b ec                	mov    ebp,esp
1001e773:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1001e776:	85 c0                	test   eax,eax
1001e778:	74 0f                	je     0x1001e789
1001e77a:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1001e77d:	85 c9                	test   ecx,ecx
1001e77f:	74 08                	je     0x1001e789
1001e781:	8b 01                	mov    eax,DWORD PTR [ecx]
1001e783:	ff 90 50 02 00 00    	call   DWORD PTR [eax+0x250]
1001e789:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001e78e:	f3 0f 10 05 fc 2d 22 	movss  xmm0,DWORD PTR ds:0x10222dfc
1001e795:	10 
1001e796:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1001e79b:	5d                   	pop    ebp
1001e79c:	e9 7f 59 0a 00       	jmp    0x100c4120
