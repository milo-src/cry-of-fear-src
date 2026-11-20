
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b0f50 <.text+0xaff50>:
100b0f50:	55                   	push   ebp
100b0f51:	8b ec                	mov    ebp,esp
100b0f53:	56                   	push   esi
100b0f54:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100b0f57:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100b0f5a:	85 f6                	test   esi,esi
100b0f5c:	75 13                	jne    0x100b0f71
100b0f5e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100b0f64:	85 c0                	test   eax,eax
100b0f66:	74 06                	je     0x100b0f6e
100b0f68:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100b0f6e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100b0f71:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100b0f77:	85 c9                	test   ecx,ecx
100b0f79:	74 07                	je     0x100b0f82
100b0f7b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100b0f7e:	85 c0                	test   eax,eax
100b0f80:	75 27                	jne    0x100b0fa9
100b0f82:	68 6c 03 00 00       	push   0x36c
100b0f87:	51                   	push   ecx
100b0f88:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100b0f8e:	83 c4 08             	add    esp,0x8
100b0f91:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100b0f94:	85 c0                	test   eax,eax
100b0f96:	74 0c                	je     0x100b0fa4
100b0f98:	c7 00 e0 e8 1c 10    	mov    DWORD PTR [eax],0x101ce8e0
100b0f9e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100b0fa1:	5e                   	pop    esi
100b0fa2:	5d                   	pop    ebp
100b0fa3:	c3                   	ret
100b0fa4:	33 c0                	xor    eax,eax
100b0fa6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100b0fa9:	5e                   	pop    esi
100b0faa:	5d                   	pop    ebp
100b0fab:	c3                   	ret
