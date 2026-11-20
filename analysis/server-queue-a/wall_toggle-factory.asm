
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fe00 <.text+0xee00>:
1000fe00:	55                   	push   ebp
1000fe01:	8b ec                	mov    ebp,esp
1000fe03:	56                   	push   esi
1000fe04:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fe07:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fe0a:	85 f6                	test   esi,esi
1000fe0c:	75 13                	jne    0x1000fe21
1000fe0e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fe14:	85 c0                	test   eax,eax
1000fe16:	74 06                	je     0x1000fe1e
1000fe18:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fe1e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fe21:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fe27:	85 c9                	test   ecx,ecx
1000fe29:	74 07                	je     0x1000fe32
1000fe2b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fe2e:	85 c0                	test   eax,eax
1000fe30:	75 27                	jne    0x1000fe59
1000fe32:	68 e0 00 00 00       	push   0xe0
1000fe37:	51                   	push   ecx
1000fe38:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fe3e:	83 c4 08             	add    esp,0x8
1000fe41:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fe44:	85 c0                	test   eax,eax
1000fe46:	74 0c                	je     0x1000fe54
1000fe48:	c7 00 00 39 1a 10    	mov    DWORD PTR [eax],0x101a3900
1000fe4e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fe51:	5e                   	pop    esi
1000fe52:	5d                   	pop    ebp
1000fe53:	c3                   	ret
1000fe54:	33 c0                	xor    eax,eax
1000fe56:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fe59:	5e                   	pop    esi
1000fe5a:	5d                   	pop    ebp
1000fe5b:	c3                   	ret
