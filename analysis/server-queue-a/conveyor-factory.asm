
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fb00 <.text+0xeb00>:
1000fb00:	55                   	push   ebp
1000fb01:	8b ec                	mov    ebp,esp
1000fb03:	56                   	push   esi
1000fb04:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fb07:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fb0a:	85 f6                	test   esi,esi
1000fb0c:	75 13                	jne    0x1000fb21
1000fb0e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fb14:	85 c0                	test   eax,eax
1000fb16:	74 06                	je     0x1000fb1e
1000fb18:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fb1e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fb21:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fb27:	85 c9                	test   ecx,ecx
1000fb29:	74 07                	je     0x1000fb32
1000fb2b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fb2e:	85 c0                	test   eax,eax
1000fb30:	75 27                	jne    0x1000fb59
1000fb32:	68 e0 00 00 00       	push   0xe0
1000fb37:	51                   	push   ecx
1000fb38:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fb3e:	83 c4 08             	add    esp,0x8
1000fb41:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fb44:	85 c0                	test   eax,eax
1000fb46:	74 0c                	je     0x1000fb54
1000fb48:	c7 00 20 3a 1a 10    	mov    DWORD PTR [eax],0x101a3a20
1000fb4e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fb51:	5e                   	pop    esi
1000fb52:	5d                   	pop    ebp
1000fb53:	c3                   	ret
1000fb54:	33 c0                	xor    eax,eax
1000fb56:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fb59:	5e                   	pop    esi
1000fb5a:	5d                   	pop    ebp
1000fb5b:	c3                   	ret
