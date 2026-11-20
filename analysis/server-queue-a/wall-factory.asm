
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fda0 <.text+0xeda0>:
1000fda0:	55                   	push   ebp
1000fda1:	8b ec                	mov    ebp,esp
1000fda3:	56                   	push   esi
1000fda4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fda7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fdaa:	85 f6                	test   esi,esi
1000fdac:	75 13                	jne    0x1000fdc1
1000fdae:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fdb4:	85 c0                	test   eax,eax
1000fdb6:	74 06                	je     0x1000fdbe
1000fdb8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fdbe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fdc1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fdc7:	85 c9                	test   ecx,ecx
1000fdc9:	74 07                	je     0x1000fdd2
1000fdcb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fdce:	85 c0                	test   eax,eax
1000fdd0:	75 27                	jne    0x1000fdf9
1000fdd2:	68 e0 00 00 00       	push   0xe0
1000fdd7:	51                   	push   ecx
1000fdd8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fdde:	83 c4 08             	add    esp,0x8
1000fde1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fde4:	85 c0                	test   eax,eax
1000fde6:	74 0c                	je     0x1000fdf4
1000fde8:	c7 00 e0 37 1a 10    	mov    DWORD PTR [eax],0x101a37e0
1000fdee:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fdf1:	5e                   	pop    esi
1000fdf2:	5d                   	pop    ebp
1000fdf3:	c3                   	ret
1000fdf4:	33 c0                	xor    eax,eax
1000fdf6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fdf9:	5e                   	pop    esi
1000fdfa:	5d                   	pop    ebp
1000fdfb:	c3                   	ret
