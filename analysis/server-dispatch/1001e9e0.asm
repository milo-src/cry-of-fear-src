
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001e9e0 <.text+0x1d9e0>:
1001e9e0:	55                   	push   ebp
1001e9e1:	8b ec                	mov    ebp,esp
1001e9e3:	53                   	push   ebx
1001e9e4:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
1001e9e7:	57                   	push   edi
1001e9e8:	33 ff                	xor    edi,edi
1001e9ea:	c7 05 00 2e 22 10 01 	mov    DWORD PTR ds:0x10222e00,0x1
1001e9f1:	00 00 00 
1001e9f4:	c7 05 f8 2d 22 10 01 	mov    DWORD PTR ds:0x10222df8,0x1
1001e9fb:	00 00 00 
1001e9fe:	85 db                	test   ebx,ebx
1001ea00:	7e 5c                	jle    0x1001ea5e
1001ea02:	56                   	push   esi
1001ea03:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1001ea06:	83 3e 00             	cmp    DWORD PTR [esi],0x0
1001ea09:	75 47                	jne    0x1001ea52
1001ea0b:	3b 7d 10             	cmp    edi,DWORD PTR [ebp+0x10]
1001ea0e:	7c 42                	jl     0x1001ea52
1001ea10:	83 7e 7c 00          	cmp    DWORD PTR [esi+0x7c],0x0
1001ea14:	74 3c                	je     0x1001ea52
1001ea16:	8b 4e 7c             	mov    ecx,DWORD PTR [esi+0x7c]
1001ea19:	85 c9                	test   ecx,ecx
1001ea1b:	74 13                	je     0x1001ea30
1001ea1d:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1001ea20:	83 b8 a8 01 00 00 00 	cmp    DWORD PTR [eax+0x1a8],0x0
1001ea27:	7c 07                	jl     0x1001ea30
1001ea29:	8b 01                	mov    eax,DWORD PTR [ecx]
1001ea2b:	ff 50 44             	call   DWORD PTR [eax+0x44]
1001ea2e:	eb 22                	jmp    0x1001ea52
1001ea30:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001ea35:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001ea3b:	03 86 80 00 00 00    	add    eax,DWORD PTR [esi+0x80]
1001ea41:	50                   	push   eax
1001ea42:	68 38 8e 1a 10       	push   0x101a8e38
1001ea47:	6a 01                	push   0x1
1001ea49:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1001ea4f:	83 c4 0c             	add    esp,0xc
1001ea52:	47                   	inc    edi
1001ea53:	81 c6 2c 03 00 00    	add    esi,0x32c
1001ea59:	3b fb                	cmp    edi,ebx
1001ea5b:	7c a9                	jl     0x1001ea06
1001ea5d:	5e                   	pop    esi
1001ea5e:	5f                   	pop    edi
1001ea5f:	5b                   	pop    ebx
1001ea60:	5d                   	pop    ebp
1001ea61:	e9 5a 75 0c 00       	jmp    0x100e5fc0
