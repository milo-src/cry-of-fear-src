
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a1f70 <.text+0xa0f70>:
100a1f70:	55                   	push   ebp
100a1f71:	8b ec                	mov    ebp,esp
100a1f73:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100a1f77:	57                   	push   edi
100a1f78:	8b f9                	mov    edi,ecx
100a1f7a:	0f 84 82 00 00 00    	je     0x100a2002
100a1f80:	a1 10 2e 22 10       	mov    eax,ds:0x10222e10
100a1f85:	56                   	push   esi
100a1f86:	85 c0                	test   eax,eax
100a1f88:	74 50                	je     0x100a1fda
100a1f8a:	68 38 0f 01 00       	push   0x10f38
100a1f8f:	83 c0 04             	add    eax,0x4
100a1f92:	6a 00                	push   0x0
100a1f94:	50                   	push   eax
100a1f95:	e8 f6 d4 09 00       	call   0x1013f490
100a1f9a:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100a1fa0:	be 01 00 00 00       	mov    esi,0x1
100a1fa5:	83 c4 0c             	add    esp,0xc
100a1fa8:	39 b1 90 00 00 00    	cmp    DWORD PTR [ecx+0x90],esi
100a1fae:	7c 30                	jl     0x100a1fe0
100a1fb0:	56                   	push   esi
100a1fb1:	e8 ca 76 07 00       	call   0x10119680
100a1fb6:	83 c4 04             	add    esp,0x4
100a1fb9:	85 c0                	test   eax,eax
100a1fbb:	74 0c                	je     0x100a1fc9
100a1fbd:	8b 0d 10 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e10
100a1fc3:	50                   	push   eax
100a1fc4:	e8 b7 84 f8 ff       	call   0x1002a480
100a1fc9:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100a1fcf:	46                   	inc    esi
100a1fd0:	3b b1 90 00 00 00    	cmp    esi,DWORD PTR [ecx+0x90]
100a1fd6:	7e d8                	jle    0x100a1fb0
100a1fd8:	eb 06                	jmp    0x100a1fe0
100a1fda:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100a1fe0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100a1fe3:	5e                   	pop    esi
100a1fe4:	8b 90 d8 01 00 00    	mov    edx,DWORD PTR [eax+0x1d8]
100a1fea:	85 d2                	test   edx,edx
100a1fec:	74 14                	je     0x100a2002
100a1fee:	8b 81 98 00 00 00    	mov    eax,DWORD PTR [ecx+0x98]
100a1ff4:	03 c2                	add    eax,edx
100a1ff6:	6a 00                	push   0x0
100a1ff8:	50                   	push   eax
100a1ff9:	ff 15 60 2f 22 10    	call   DWORD PTR ds:0x10222f60
100a1fff:	83 c4 08             	add    esp,0x8
100a2002:	5f                   	pop    edi
100a2003:	5d                   	pop    ebp
100a2004:	c2 10 00             	ret    0x10
