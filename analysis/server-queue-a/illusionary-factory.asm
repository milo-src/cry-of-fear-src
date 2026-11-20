
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fbc0 <.text+0xebc0>:
1000fbc0:	55                   	push   ebp
1000fbc1:	8b ec                	mov    ebp,esp
1000fbc3:	56                   	push   esi
1000fbc4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fbc7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fbca:	85 f6                	test   esi,esi
1000fbcc:	75 13                	jne    0x1000fbe1
1000fbce:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fbd4:	85 c0                	test   eax,eax
1000fbd6:	74 06                	je     0x1000fbde
1000fbd8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fbde:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fbe1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fbe7:	85 c9                	test   ecx,ecx
1000fbe9:	74 07                	je     0x1000fbf2
1000fbeb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fbee:	85 c0                	test   eax,eax
1000fbf0:	75 27                	jne    0x1000fc19
1000fbf2:	68 80 01 00 00       	push   0x180
1000fbf7:	51                   	push   ecx
1000fbf8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fbfe:	83 c4 08             	add    esp,0x8
1000fc01:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fc04:	85 c0                	test   eax,eax
1000fc06:	74 0c                	je     0x1000fc14
1000fc08:	c7 00 40 3b 1a 10    	mov    DWORD PTR [eax],0x101a3b40
1000fc0e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fc11:	5e                   	pop    esi
1000fc12:	5d                   	pop    ebp
1000fc13:	c3                   	ret
1000fc14:	33 c0                	xor    eax,eax
1000fc16:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fc19:	5e                   	pop    esi
1000fc1a:	5d                   	pop    ebp
1000fc1b:	c3                   	ret
