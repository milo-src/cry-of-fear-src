
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fb60 <.text+0xeb60>:
1000fb60:	55                   	push   ebp
1000fb61:	8b ec                	mov    ebp,esp
1000fb63:	56                   	push   esi
1000fb64:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fb67:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fb6a:	85 f6                	test   esi,esi
1000fb6c:	75 13                	jne    0x1000fb81
1000fb6e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fb74:	85 c0                	test   eax,eax
1000fb76:	74 06                	je     0x1000fb7e
1000fb78:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fb7e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fb81:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fb87:	85 c9                	test   ecx,ecx
1000fb89:	74 07                	je     0x1000fb92
1000fb8b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fb8e:	85 c0                	test   eax,eax
1000fb90:	75 27                	jne    0x1000fbb9
1000fb92:	68 80 01 00 00       	push   0x180
1000fb97:	51                   	push   ecx
1000fb98:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fb9e:	83 c4 08             	add    esp,0x8
1000fba1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fba4:	85 c0                	test   eax,eax
1000fba6:	74 0c                	je     0x1000fbb4
1000fba8:	c7 00 34 44 1a 10    	mov    DWORD PTR [eax],0x101a4434
1000fbae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fbb1:	5e                   	pop    esi
1000fbb2:	5d                   	pop    ebp
1000fbb3:	c3                   	ret
1000fbb4:	33 c0                	xor    eax,eax
1000fbb6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fbb9:	5e                   	pop    esi
1000fbba:	5d                   	pop    ebp
1000fbbb:	c3                   	ret
