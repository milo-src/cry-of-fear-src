
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008fce0 <.text+0x8ece0>:
1008fce0:	55                   	push   ebp
1008fce1:	8b ec                	mov    ebp,esp
1008fce3:	56                   	push   esi
1008fce4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008fce7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008fcea:	85 f6                	test   esi,esi
1008fcec:	75 13                	jne    0x1008fd01
1008fcee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1008fcf4:	85 c0                	test   eax,eax
1008fcf6:	74 06                	je     0x1008fcfe
1008fcf8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1008fcfe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008fd01:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008fd07:	85 c9                	test   ecx,ecx
1008fd09:	74 07                	je     0x1008fd12
1008fd0b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1008fd0e:	85 c0                	test   eax,eax
1008fd10:	75 27                	jne    0x1008fd39
1008fd12:	68 dc 00 00 00       	push   0xdc
1008fd17:	51                   	push   ecx
1008fd18:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1008fd1e:	83 c4 08             	add    esp,0x8
1008fd21:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008fd24:	85 c0                	test   eax,eax
1008fd26:	74 0c                	je     0x1008fd34
1008fd28:	c7 00 e0 8c 1c 10    	mov    DWORD PTR [eax],0x101c8ce0
1008fd2e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008fd31:	5e                   	pop    esi
1008fd32:	5d                   	pop    ebp
1008fd33:	c3                   	ret
1008fd34:	33 c0                	xor    eax,eax
1008fd36:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008fd39:	5e                   	pop    esi
1008fd3a:	5d                   	pop    ebp
1008fd3b:	c3                   	ret
