
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100910 <.text+0xff910>:
10100910:	55                   	push   ebp
10100911:	8b ec                	mov    ebp,esp
10100913:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
10100919:	85 c9                	test   ecx,ecx
1010091b:	74 18                	je     0x10100935
1010091d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10100920:	83 f8 3f             	cmp    eax,0x3f
10100923:	7e 14                	jle    0x10100939
10100925:	68 60 ef 1d 10       	push   0x101def60
1010092a:	6a 01                	push   0x1
1010092c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10100932:	83 c4 08             	add    esp,0x8
10100935:	33 c0                	xor    eax,eax
10100937:	5d                   	pop    ebp
10100938:	c3                   	ret
10100939:	85 c0                	test   eax,eax
1010093b:	79 14                	jns    0x10100951
1010093d:	68 8c ef 1d 10       	push   0x101def8c
10100942:	6a 01                	push   0x1
10100944:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1010094a:	83 c4 08             	add    esp,0x8
1010094d:	33 c0                	xor    eax,eax
1010094f:	5d                   	pop    ebp
10100950:	c3                   	ret
10100951:	c1 e0 05             	shl    eax,0x5
10100954:	05 ec 00 00 00       	add    eax,0xec
10100959:	03 c1                	add    eax,ecx
1010095b:	5d                   	pop    ebp
1010095c:	c3                   	ret
