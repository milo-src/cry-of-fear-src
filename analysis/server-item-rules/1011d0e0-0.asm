
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d0e0 <.text+0x11c0e0>:
1011d0e0:	55                   	push   ebp
1011d0e1:	8b ec                	mov    ebp,esp
1011d0e3:	8b d1                	mov    edx,ecx
1011d0e5:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1011d0e8:	81 b9 e4 01 00 00 66 	cmp    DWORD PTR [ecx+0x1e4],0xfffffd66
1011d0ef:	fd ff ff 
1011d0f2:	75 09                	jne    0x1011d0fd
1011d0f4:	b8 01 00 00 00       	mov    eax,0x1
1011d0f9:	5d                   	pop    ebp
1011d0fa:	c2 04 00             	ret    0x4
1011d0fd:	6b 82 68 01 00 00 2c 	imul   eax,DWORD PTR [edx+0x168],0x2c
1011d104:	53                   	push   ebx
1011d105:	8b 9a e4 01 00 00    	mov    ebx,DWORD PTR [edx+0x1e4]
1011d10b:	56                   	push   esi
1011d10c:	57                   	push   edi
1011d10d:	6a 00                	push   0x0
1011d10f:	8b b0 90 18 23 10    	mov    esi,DWORD PTR [eax+0x10231890]
1011d115:	8b 81 60 01 00 00    	mov    eax,DWORD PTR [ecx+0x160]
1011d11b:	8b ca                	mov    ecx,edx
1011d11d:	8b 38                	mov    edi,DWORD PTR [eax]
1011d11f:	e8 cc 31 00 00       	call   0x101202f0
1011d124:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1011d127:	50                   	push   eax
1011d128:	33 c0                	xor    eax,eax
1011d12a:	83 fb ff             	cmp    ebx,0xffffffff
1011d12d:	56                   	push   esi
1011d12e:	8b 89 60 01 00 00    	mov    ecx,DWORD PTR [ecx+0x160]
1011d134:	0f 45 c3             	cmovne eax,ebx
1011d137:	50                   	push   eax
1011d138:	ff 97 94 00 00 00    	call   DWORD PTR [edi+0x94]
1011d13e:	5f                   	pop    edi
1011d13f:	5e                   	pop    esi
1011d140:	5b                   	pop    ebx
1011d141:	5d                   	pop    ebp
1011d142:	c2 04 00             	ret    0x4
