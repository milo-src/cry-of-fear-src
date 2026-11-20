100621f0:	55                   	push   ebp
100621f1:	8b ec                	mov    ebp,esp
100621f3:	83 ec 4c             	sub    esp,0x4c
100621f6:	a1 00 06 19 10       	mov    eax,ds:0x10190600
100621fb:	33 c5                	xor    eax,ebp
100621fd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10062200:	57                   	push   edi
10062201:	56                   	push   esi
10062202:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
10062205:	56                   	push   esi
10062206:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10062209:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1006220c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1006220f:	ff 15 ac e7 1b 10    	call   DWORD PTR ds:0x101be7ac
10062215:	8d 45 b8             	lea    eax,[ebp-0x48]
10062218:	50                   	push   eax
10062219:	68 4b 86 00 00       	push   0x864b
1006221e:	ff 15 b8 e6 1b 10    	call   DWORD PTR ds:0x101be6b8
10062224:	8d 45 b4             	lea    eax,[ebp-0x4c]
10062227:	50                   	push   eax
10062228:	68 b6 88 00 00       	push   0x88b6
1006222d:	68 04 88 00 00       	push   0x8804
10062232:	ff 15 b0 e7 1b 10    	call   DWORD PTR ds:0x101be7b0
10062238:	8b 4d b8             	mov    ecx,DWORD PTR [ebp-0x48]
1006223b:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
1006223e:	83 f9 ff             	cmp    ecx,0xffffffff
10062241:	75 17                	jne    0x1006225a
10062243:	83 f8 01             	cmp    eax,0x1
10062246:	75 12                	jne    0x1006225a
10062248:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1006224b:	8a c0                	mov    al,al
1006224d:	5e                   	pop    esi
1006224e:	33 cd                	xor    ecx,ebp
10062250:	5f                   	pop    edi
10062251:	e8 6a 20 05 00       	call   0x100b42c0
10062256:	8b e5                	mov    esp,ebp
10062258:	5d                   	pop    ebp
10062259:	c3                   	ret
1006225a:	50                   	push   eax
1006225b:	51                   	push   ecx
1006225c:	68 10 cf 14 10       	push   0x1014cf10
10062261:	e8 9a b1 01 00       	call   0x1007d400
10062266:	03 75 b8             	add    esi,DWORD PTR [ebp-0x48]
10062269:	8d 7d bc             	lea    edi,[ebp-0x44]
1006226c:	b9 0f 00 00 00       	mov    ecx,0xf
10062271:	83 c4 0c             	add    esp,0xc
10062274:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10062276:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
10062278:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
10062279:	e8 30 29 05 00       	call   0x100b4bae
1006227e:	cc                   	int3
