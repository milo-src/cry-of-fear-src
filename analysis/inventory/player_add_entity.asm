
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e2f80 <.text+0xe1f80>:
100e2f80:	55                   	push   ebp
100e2f81:	8b ec                	mov    ebp,esp
100e2f83:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e2f88:	56                   	push   esi
100e2f89:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100e2f8c:	57                   	push   edi
100e2f8d:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e2f93:	8b f9                	mov    edi,ecx
100e2f95:	6a 07                	push   0x7
100e2f97:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100e2f9a:	68 90 87 1a 10       	push   0x101a8790
100e2f9f:	03 02                	add    eax,DWORD PTR [edx]
100e2fa1:	50                   	push   eax
100e2fa2:	e8 d9 c6 08 00       	call   0x1016f680
100e2fa7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100e2faa:	83 c4 0c             	add    esp,0xc
100e2fad:	85 c0                	test   eax,eax
100e2faf:	75 20                	jne    0x100e2fd1
100e2fb1:	51                   	push   ecx
100e2fb2:	e8 e9 6e ff ff       	call   0x100d9ea0
100e2fb7:	83 c4 04             	add    esp,0x4
100e2fba:	85 c0                	test   eax,eax
100e2fbc:	74 37                	je     0x100e2ff5
100e2fbe:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100e2fc1:	ff 31                	push   DWORD PTR [ecx]
100e2fc3:	ff b1 b8 00 00 00    	push   DWORD PTR [ecx+0xb8]
100e2fc9:	ff b0 10 01 00 00    	push   DWORD PTR [eax+0x110]
100e2fcf:	eb 0e                	jmp    0x100e2fdf
100e2fd1:	ff 31                	push   DWORD PTR [ecx]
100e2fd3:	ff b1 b8 00 00 00    	push   DWORD PTR [ecx+0xb8]
100e2fd9:	ff b1 d8 01 00 00    	push   DWORD PTR [ecx+0x1d8]
100e2fdf:	8b cf                	mov    ecx,edi
100e2fe1:	e8 5a 7d ff ff       	call   0x100dad40
100e2fe6:	85 c0                	test   eax,eax
100e2fe8:	74 0b                	je     0x100e2ff5
100e2fea:	5f                   	pop    edi
100e2feb:	b8 01 00 00 00       	mov    eax,0x1
100e2ff0:	5e                   	pop    esi
100e2ff1:	5d                   	pop    ebp
100e2ff2:	c2 04 00             	ret    0x4
100e2ff5:	6a 00                	push   0x0
100e2ff7:	6a 02                	push   0x2
100e2ff9:	68 d0 4a 1c 10       	push   0x101c4ad0
100e2ffe:	57                   	push   edi
100e2fff:	e8 0c 68 03 00       	call   0x10119810
100e3004:	83 c4 10             	add    esp,0x10
100e3007:	33 c0                	xor    eax,eax
100e3009:	5f                   	pop    edi
100e300a:	5e                   	pop    esi
100e300b:	5d                   	pop    ebp
100e300c:	c2 04 00             	ret    0x4
100e300f:	cc                   	int3
