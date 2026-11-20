
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017950 <.text+0x16950>:
10017950:	55                   	push   ebp
10017951:	8b ec                	mov    ebp,esp
10017953:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017958:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1001795b:	56                   	push   esi
1001795c:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10017962:	51                   	push   ecx
10017963:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
10017969:	8b f0                	mov    esi,eax
1001796b:	83 c4 04             	add    esp,0x4
1001796e:	85 f6                	test   esi,esi
10017970:	74 5d                	je     0x100179cf
10017972:	56                   	push   esi
10017973:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10017979:	83 c4 04             	add    esp,0x4
1001797c:	85 c0                	test   eax,eax
1001797e:	74 4f                	je     0x100179cf
10017980:	8b 76 7c             	mov    esi,DWORD PTR [esi+0x7c]
10017983:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10017986:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017989:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
1001798f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017992:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10017995:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
10017999:	66 0f d6 41 08       	movq   QWORD PTR [ecx+0x8],xmm0
1001799e:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100179a1:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100179a4:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
100179a7:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100179aa:	f3 0f 7e 01          	movq   xmm0,QWORD PTR [ecx]
100179ae:	66 0f d6 42 50       	movq   QWORD PTR [edx+0x50],xmm0
100179b3:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
100179b6:	89 4a 58             	mov    DWORD PTR [edx+0x58],ecx
100179b9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100179bc:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100179c2:	e8 09 ee ff ff       	call   0x100167d0
100179c7:	83 c4 04             	add    esp,0x4
100179ca:	8b c6                	mov    eax,esi
100179cc:	5e                   	pop    esi
100179cd:	5d                   	pop    ebp
100179ce:	c3                   	ret
100179cf:	68 a0 61 1a 10       	push   0x101a61a0
100179d4:	6a 01                	push   0x1
100179d6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100179dc:	83 c4 08             	add    esp,0x8
100179df:	33 c0                	xor    eax,eax
100179e1:	5e                   	pop    esi
100179e2:	5d                   	pop    ebp
100179e3:	c3                   	ret
