
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101019d0 <.text+0x1009d0>:
101019d0:	55                   	push   ebp
101019d1:	8b ec                	mov    ebp,esp
101019d3:	56                   	push   esi
101019d4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101019d7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
101019da:	85 f6                	test   esi,esi
101019dc:	75 13                	jne    0x101019f1
101019de:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
101019e4:	85 c0                	test   eax,eax
101019e6:	74 06                	je     0x101019ee
101019e8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
101019ee:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
101019f1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
101019f7:	85 c9                	test   ecx,ecx
101019f9:	74 07                	je     0x10101a02
101019fb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
101019fe:	85 c0                	test   eax,eax
10101a00:	75 27                	jne    0x10101a29
10101a02:	68 dc 00 00 00       	push   0xdc
10101a07:	51                   	push   ecx
10101a08:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10101a0e:	83 c4 08             	add    esp,0x8
10101a11:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10101a14:	85 c0                	test   eax,eax
10101a16:	74 0c                	je     0x10101a24
10101a18:	c7 00 0c f3 1d 10    	mov    DWORD PTR [eax],0x101df30c
10101a1e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10101a21:	5e                   	pop    esi
10101a22:	5d                   	pop    ebp
10101a23:	c3                   	ret
10101a24:	33 c0                	xor    eax,eax
10101a26:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10101a29:	5e                   	pop    esi
10101a2a:	5d                   	pop    ebp
10101a2b:	c3                   	ret
