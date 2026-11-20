
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fc80 <.text+0xec80>:
1000fc80:	55                   	push   ebp
1000fc81:	8b ec                	mov    ebp,esp
1000fc83:	56                   	push   esi
1000fc84:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fc87:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fc8a:	85 f6                	test   esi,esi
1000fc8c:	75 13                	jne    0x1000fca1
1000fc8e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fc94:	85 c0                	test   eax,eax
1000fc96:	74 06                	je     0x1000fc9e
1000fc98:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fc9e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fca1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fca7:	85 c9                	test   ecx,ecx
1000fca9:	74 07                	je     0x1000fcb2
1000fcab:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fcae:	85 c0                	test   eax,eax
1000fcb0:	75 27                	jne    0x1000fcd9
1000fcb2:	68 f8 00 00 00       	push   0xf8
1000fcb7:	51                   	push   ecx
1000fcb8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fcbe:	83 c4 08             	add    esp,0x8
1000fcc1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fcc4:	85 c0                	test   eax,eax
1000fcc6:	74 0c                	je     0x1000fcd4
1000fcc8:	c7 00 bc 3e 1a 10    	mov    DWORD PTR [eax],0x101a3ebc
1000fcce:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fcd1:	5e                   	pop    esi
1000fcd2:	5d                   	pop    ebp
1000fcd3:	c3                   	ret
1000fcd4:	33 c0                	xor    eax,eax
1000fcd6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fcd9:	5e                   	pop    esi
1000fcda:	5d                   	pop    ebp
1000fcdb:	c3                   	ret
