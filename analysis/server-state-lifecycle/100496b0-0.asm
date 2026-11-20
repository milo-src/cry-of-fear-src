
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100496b0 <.text+0x486b0>:
100496b0:	55                   	push   ebp
100496b1:	8b ec                	mov    ebp,esp
100496b3:	56                   	push   esi
100496b4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100496b7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100496ba:	85 f6                	test   esi,esi
100496bc:	75 13                	jne    0x100496d1
100496be:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100496c4:	85 c0                	test   eax,eax
100496c6:	74 06                	je     0x100496ce
100496c8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100496ce:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100496d1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100496d7:	85 c9                	test   ecx,ecx
100496d9:	74 07                	je     0x100496e2
100496db:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100496de:	85 c0                	test   eax,eax
100496e0:	75 27                	jne    0x10049709
100496e2:	68 84 01 00 00       	push   0x184
100496e7:	51                   	push   ecx
100496e8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100496ee:	83 c4 08             	add    esp,0x8
100496f1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100496f4:	85 c0                	test   eax,eax
100496f6:	74 0c                	je     0x10049704
100496f8:	c7 00 00 13 1b 10    	mov    DWORD PTR [eax],0x101b1300
100496fe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10049701:	5e                   	pop    esi
10049702:	5d                   	pop    ebp
10049703:	c3                   	ret
10049704:	33 c0                	xor    eax,eax
10049706:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10049709:	5e                   	pop    esi
1004970a:	5d                   	pop    ebp
1004970b:	c3                   	ret
