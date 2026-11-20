10062650:	55                   	push   ebp
10062651:	8b ec                	mov    ebp,esp
10062653:	a1 c8 dd 4c 10       	mov    eax,ds:0x104cddc8
10062658:	56                   	push   esi
10062659:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1006265c:	f3 0f 10 80 e0 02 00 	movss  xmm0,DWORD PTR [eax+0x2e0]
10062663:	00 
10062664:	0f 2e 05 ec cc 13 10 	ucomiss xmm0,DWORD PTR ds:0x1013ccec
1006266b:	9f                   	lahf
1006266c:	f6 c4 44             	test   ah,0x44
1006266f:	7b 08                	jnp    0x10062679
10062671:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10062674:	85 c0                	test   eax,eax
10062676:	0f 45 f0             	cmovne esi,eax
10062679:	80 3e 2b             	cmp    BYTE PTR [esi],0x2b
1006267c:	75 5a                	jne    0x100626d8
1006267e:	83 7e 20 00          	cmp    DWORD PTR [esi+0x20],0x0
10062682:	74 54                	je     0x100626d8
10062684:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1006268a:	d8 0d 28 ef 13 10    	fmul   DWORD PTR ds:0x1013ef28
10062690:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10062693:	f3 0f 2c 45 08       	cvttss2si eax,DWORD PTR [ebp+0x8]
10062698:	99                   	cdq
10062699:	f7 7e 20             	idiv   DWORD PTR [esi+0x20]
1006269c:	33 c0                	xor    eax,eax
1006269e:	66 90                	xchg   ax,ax
100626a0:	39 56 24             	cmp    DWORD PTR [esi+0x24],edx
100626a3:	7f 05                	jg     0x100626aa
100626a5:	39 56 28             	cmp    DWORD PTR [esi+0x28],edx
100626a8:	7f 2e                	jg     0x100626d8
100626aa:	8b 76 2c             	mov    esi,DWORD PTR [esi+0x2c]
100626ad:	85 f6                	test   esi,esi
100626af:	74 19                	je     0x100626ca
100626b1:	40                   	inc    eax
100626b2:	83 f8 64             	cmp    eax,0x64
100626b5:	7e e9                	jle    0x100626a0
100626b7:	68 ec ce 14 10       	push   0x1014ceec
100626bc:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
100626c2:	83 c4 04             	add    esp,0x4
100626c5:	8b c6                	mov    eax,esi
100626c7:	5e                   	pop    esi
100626c8:	5d                   	pop    ebp
100626c9:	c3                   	ret
100626ca:	68 c8 ce 14 10       	push   0x1014cec8
100626cf:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
100626d5:	83 c4 04             	add    esp,0x4
100626d8:	8b c6                	mov    eax,esi
100626da:	5e                   	pop    esi
100626db:	5d                   	pop    ebp
100626dc:	c3                   	ret
