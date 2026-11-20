
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a820 <.text+0x119820>:
1011a820:	55                   	push   ebp
1011a821:	8b ec                	mov    ebp,esp
1011a823:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
1011a826:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1011a829:	f7 d9                	neg    ecx
1011a82b:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1011a82e:	1b c9                	sbb    ecx,ecx
1011a830:	33 c0                	xor    eax,eax
1011a832:	81 e1 00 01 00 00    	and    ecx,0x100
1011a838:	83 7d 10 01          	cmp    DWORD PTR [ebp+0x10],0x1
1011a83c:	0f 94 c0             	sete   al
1011a83f:	0b c8                	or     ecx,eax
1011a841:	51                   	push   ecx
1011a842:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011a845:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011a848:	ff 15 c4 2f 22 10    	call   DWORD PTR ds:0x10222fc4
1011a84e:	83 c4 14             	add    esp,0x14
1011a851:	5d                   	pop    ebp
1011a852:	c3                   	ret
