
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012880 <.text+0x11880>:
10012880:	55                   	push   ebp
10012881:	8b ec                	mov    ebp,esp
10012883:	56                   	push   esi
10012884:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012887:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001288a:	85 f6                	test   esi,esi
1001288c:	75 13                	jne    0x100128a1
1001288e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012894:	85 c0                	test   eax,eax
10012896:	74 06                	je     0x1001289e
10012898:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001289e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100128a1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100128a7:	85 c9                	test   ecx,ecx
100128a9:	74 07                	je     0x100128b2
100128ab:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100128ae:	85 c0                	test   eax,eax
100128b0:	75 27                	jne    0x100128d9
100128b2:	68 e4 01 00 00       	push   0x1e4
100128b7:	51                   	push   ecx
100128b8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100128be:	83 c4 08             	add    esp,0x8
100128c1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100128c4:	85 c0                	test   eax,eax
100128c6:	74 0c                	je     0x100128d4
100128c8:	c7 00 48 59 1a 10    	mov    DWORD PTR [eax],0x101a5948
100128ce:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100128d1:	5e                   	pop    esi
100128d2:	5d                   	pop    ebp
100128d3:	c3                   	ret
100128d4:	33 c0                	xor    eax,eax
100128d6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100128d9:	5e                   	pop    esi
100128da:	5d                   	pop    ebp
100128db:	c3                   	ret
