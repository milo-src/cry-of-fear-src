
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042b40 <.text+0x41b40>:
10042b40:	55                   	push   ebp
10042b41:	8b ec                	mov    ebp,esp
10042b43:	56                   	push   esi
10042b44:	57                   	push   edi
10042b45:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10042b48:	8b f1                	mov    esi,ecx
10042b4a:	57                   	push   edi
10042b4b:	e8 b0 54 fd ff       	call   0x10018000
10042b50:	85 c0                	test   eax,eax
10042b52:	75 06                	jne    0x10042b5a
10042b54:	5f                   	pop    edi
10042b55:	5e                   	pop    esi
10042b56:	5d                   	pop    ebp
10042b57:	c2 04 00             	ret    0x4
10042b5a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10042b5d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042b62:	6a 07                	push   0x7
10042b64:	68 10 24 21 10       	push   0x10212410
10042b69:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10042b6f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10042b75:	56                   	push   esi
10042b76:	68 6c 00 1b 10       	push   0x101b006c
10042b7b:	85 d2                	test   edx,edx
10042b7d:	74 10                	je     0x10042b8f
10042b7f:	03 c2                	add    eax,edx
10042b81:	8b cf                	mov    ecx,edi
10042b83:	50                   	push   eax
10042b84:	e8 37 82 0d 00       	call   0x1011adc0
10042b89:	5f                   	pop    edi
10042b8a:	5e                   	pop    esi
10042b8b:	5d                   	pop    ebp
10042b8c:	c2 04 00             	ret    0x4
10042b8f:	03 01                	add    eax,DWORD PTR [ecx]
10042b91:	8b cf                	mov    ecx,edi
10042b93:	50                   	push   eax
10042b94:	e8 27 82 0d 00       	call   0x1011adc0
10042b99:	5f                   	pop    edi
10042b9a:	5e                   	pop    esi
10042b9b:	5d                   	pop    ebp
10042b9c:	c2 04 00             	ret    0x4
