 1ddd3c7:	55                   	push   ebp
 1ddd3c8:	8b ec                	mov    ebp,esp
 1ddd3ca:	51                   	push   ecx
 1ddd3cb:	a1 d0 04 52 02       	mov    eax,ds:0x25204d0
 1ddd3d0:	50                   	push   eax
 1ddd3d1:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1ddd3d4:	51                   	push   ecx
 1ddd3d5:	e8 f1 4f f8 ff       	call   0x1d623cb
 1ddd3da:	83 c4 08             	add    esp,0x8
 1ddd3dd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1ddd3e0:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
 1ddd3e4:	74 19                	je     0x1ddd3ff
 1ddd3e6:	8b 15 d0 04 52 02    	mov    edx,DWORD PTR ds:0x25204d0
 1ddd3ec:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1ddd3ef:	2b 82 8c 00 00 00    	sub    eax,DWORD PTR [edx+0x8c]
 1ddd3f5:	99                   	cdq
 1ddd3f6:	b9 3c 00 00 00       	mov    ecx,0x3c
 1ddd3fb:	f7 f9                	idiv   ecx
 1ddd3fd:	eb 02                	jmp    0x1ddd401
 1ddd3ff:	33 c0                	xor    eax,eax
 1ddd401:	8b e5                	mov    esp,ebp
 1ddd403:	5d                   	pop    ebp
 1ddd404:	c3                   	ret
