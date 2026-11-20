
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1005fbc0 <.text+0x5ebc0>:
1005fbc0:	55                   	push   ebp
1005fbc1:	8b ec                	mov    ebp,esp
1005fbc3:	56                   	push   esi
1005fbc4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1005fbc7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1005fbca:	85 f6                	test   esi,esi
1005fbcc:	75 13                	jne    0x1005fbe1
1005fbce:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1005fbd4:	85 c0                	test   eax,eax
1005fbd6:	74 06                	je     0x1005fbde
1005fbd8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1005fbde:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1005fbe1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1005fbe7:	85 c9                	test   ecx,ecx
1005fbe9:	74 07                	je     0x1005fbf2
1005fbeb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1005fbee:	85 c0                	test   eax,eax
1005fbf0:	75 27                	jne    0x1005fc19
1005fbf2:	68 e0 00 00 00       	push   0xe0
1005fbf7:	51                   	push   ecx
1005fbf8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1005fbfe:	83 c4 08             	add    esp,0x8
1005fc01:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1005fc04:	85 c0                	test   eax,eax
1005fc06:	74 0c                	je     0x1005fc14
1005fc08:	c7 00 00 59 1b 10    	mov    DWORD PTR [eax],0x101b5900
1005fc0e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1005fc11:	5e                   	pop    esi
1005fc12:	5d                   	pop    ebp
1005fc13:	c3                   	ret
1005fc14:	33 c0                	xor    eax,eax
1005fc16:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1005fc19:	5e                   	pop    esi
1005fc1a:	5d                   	pop    ebp
1005fc1b:	c3                   	ret
