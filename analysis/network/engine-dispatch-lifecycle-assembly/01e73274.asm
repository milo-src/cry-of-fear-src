 1e73274:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
 1e73278:	89 2a                	mov    DWORD PTR [edx],ebp
 1e7327a:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
 1e7327d:	89 7a 08             	mov    DWORD PTR [edx+0x8],edi
 1e73280:	89 72 0c             	mov    DWORD PTR [edx+0xc],esi
 1e73283:	89 62 10             	mov    DWORD PTR [edx+0x10],esp
 1e73286:	8b 04 24             	mov    eax,DWORD PTR [esp]
 1e73289:	89 42 14             	mov    DWORD PTR [edx+0x14],eax
 1e7328c:	c7 42 20 30 32 43 56 	mov    DWORD PTR [edx+0x20],0x56433230
 1e73293:	c7 42 24 00 00 00 00 	mov    DWORD PTR [edx+0x24],0x0
 1e7329a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
 1e732a0:	89 42 18             	mov    DWORD PTR [edx+0x18],eax
 1e732a3:	83 f8 ff             	cmp    eax,0xffffffff
 1e732a6:	75 09                	jne    0x1e732b1
 1e732a8:	c7 42 1c ff ff ff ff 	mov    DWORD PTR [edx+0x1c],0xffffffff
 1e732af:	eb 3b                	jmp    0x1e732ec
 1e732b1:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
 1e732b5:	0b c9                	or     ecx,ecx
 1e732b7:	74 0a                	je     0x1e732c3
 1e732b9:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
 1e732bd:	89 42 24             	mov    DWORD PTR [edx+0x24],eax
 1e732c0:	49                   	dec    ecx
 1e732c1:	75 08                	jne    0x1e732cb
 1e732c3:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
 1e732c6:	89 42 1c             	mov    DWORD PTR [edx+0x1c],eax
 1e732c9:	eb 21                	jmp    0x1e732ec
 1e732cb:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
 1e732cf:	89 42 1c             	mov    DWORD PTR [edx+0x1c],eax
 1e732d2:	49                   	dec    ecx
 1e732d3:	74 17                	je     0x1e732ec
 1e732d5:	56                   	push   esi
 1e732d6:	57                   	push   edi
 1e732d7:	8d 74 24 1c          	lea    esi,[esp+0x1c]
 1e732db:	8d 7a 28             	lea    edi,[edx+0x28]
 1e732de:	83 f9 06             	cmp    ecx,0x6
 1e732e1:	76 05                	jbe    0x1e732e8
 1e732e3:	b9 06 00 00 00       	mov    ecx,0x6
 1e732e8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
 1e732ea:	5f                   	pop    edi
 1e732eb:	5e                   	pop    esi
 1e732ec:	2b c0                	sub    eax,eax
 1e732ee:	c3                   	ret
