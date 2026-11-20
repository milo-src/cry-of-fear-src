; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
100338a0:	55                   	push   ebp
100338a1:	8b ec                	mov    ebp,esp
100338a3:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100338a6:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100338a9:	e8 a2 cf 04 00       	call   0x10080850
100338ae:	83 c4 08             	add    esp,0x8
100338b1:	e8 fa cf 04 00       	call   0x100808b0
100338b6:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
100338bc:	8b 89 7c 14 00 00    	mov    ecx,DWORD PTR [ecx+0x147c]
100338c2:	85 c9                	test   ecx,ecx
100338c4:	0f 84 1d 01 00 00    	je     0x100339e7
100338ca:	c6 81 c4 00 00 00 00 	mov    BYTE PTR [ecx+0xc4],0x0
100338d1:	85 c0                	test   eax,eax
100338d3:	0f 8e 15 01 00 00    	jle    0x100339ee
100338d9:	83 f8 01             	cmp    eax,0x1
100338dc:	0f 85 8a 00 00 00    	jne    0x1003396c
100338e2:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100338e7:	8b 88 7c 14 00 00    	mov    ecx,DWORD PTR [eax+0x147c]
100338ed:	8b 01                	mov    eax,DWORD PTR [ecx]
100338ef:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
100338f2:	ff d0                	call   eax
100338f4:	84 c0                	test   al,al
100338f6:	75 3d                	jne    0x10033935
100338f8:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100338fd:	6a 01                	push   0x1
100338ff:	8b 88 7c 14 00 00    	mov    ecx,DWORD PTR [eax+0x147c]
10033905:	8b 01                	mov    eax,DWORD PTR [ecx]
10033907:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003390a:	51                   	push   ecx
1003390b:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10033912:	68 3c 49 14 10       	push   0x1014493c
10033917:	ff 15 60 26 1b 10    	call   DWORD PTR ds:0x101b2660
1003391d:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10033922:	83 c4 08             	add    esp,0x8
10033925:	8b 80 7c 14 00 00    	mov    eax,DWORD PTR [eax+0x147c]
1003392b:	c7 80 c8 00 00 00 00 	mov    DWORD PTR [eax+0xc8],0x437f0000
10033932:	00 7f 43 
10033935:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003393b:	e8 90 71 07 00       	call   0x100aaad0
10033940:	e8 1b d1 04 00       	call   0x10080a60
10033945:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
1003394b:	8b 91 7c 14 00 00    	mov    edx,DWORD PTR [ecx+0x147c]
10033951:	81 c2 cc 00 00 00    	add    edx,0xcc
10033957:	8a 08                	mov    cl,BYTE PTR [eax]
10033959:	8d 40 01             	lea    eax,[eax+0x1]
1003395c:	88 0a                	mov    BYTE PTR [edx],cl
1003395e:	8d 52 01             	lea    edx,[edx+0x1]
10033961:	84 c9                	test   cl,cl
10033963:	75 f2                	jne    0x10033957
10033965:	b8 01 00 00 00       	mov    eax,0x1
1003396a:	5d                   	pop    ebp
1003396b:	c3                   	ret
1003396c:	83 f8 02             	cmp    eax,0x2
1003396f:	75 5f                	jne    0x100339d0
10033971:	56                   	push   esi
10033972:	ff 15 d4 26 1b 10    	call   DWORD PTR ds:0x101b26d4
10033978:	8b f0                	mov    esi,eax
1003397a:	85 f6                	test   esi,esi
1003397c:	74 4a                	je     0x100339c8
1003397e:	8b 0d 58 27 1b 10    	mov    ecx,DWORD PTR ds:0x101b2758
10033984:	68 5c 49 14 10       	push   0x1014495c
10033989:	6a 03                	push   0x3
1003398b:	6a ff                	push   0xffffffff
1003398d:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
10033990:	ff d1                	call   ecx
10033992:	83 c4 0c             	add    esp,0xc
10033995:	8d 86 c0 02 00 00    	lea    eax,[esi+0x2c0]
1003399b:	6a 64                	push   0x64
1003399d:	6a 00                	push   0x0
1003399f:	83 ec 08             	sub    esp,0x8
100339a2:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100339a9:	00 
100339aa:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100339b1:	68 5c 49 14 10       	push   0x1014495c
100339b6:	6a 03                	push   0x3
100339b8:	50                   	push   eax
100339b9:	a1 58 27 1b 10       	mov    eax,ds:0x101b2758
100339be:	6a ff                	push   0xffffffff
100339c0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100339c3:	ff d0                	call   eax
100339c5:	83 c4 20             	add    esp,0x20
100339c8:	b8 01 00 00 00       	mov    eax,0x1
100339cd:	5e                   	pop    esi
100339ce:	5d                   	pop    ebp
100339cf:	c3                   	ret
100339d0:	83 f8 03             	cmp    eax,0x3
100339d3:	75 12                	jne    0x100339e7
100339d5:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100339da:	8b 80 7c 14 00 00    	mov    eax,DWORD PTR [eax+0x147c]
100339e0:	c6 80 c4 00 00 00 01 	mov    BYTE PTR [eax+0xc4],0x1
100339e7:	b8 01 00 00 00       	mov    eax,0x1
100339ec:	5d                   	pop    ebp
100339ed:	c3                   	ret
100339ee:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
100339f3:	8b 88 7c 14 00 00    	mov    ecx,DWORD PTR [eax+0x147c]
100339f9:	8b 01                	mov    eax,DWORD PTR [ecx]
100339fb:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
100339fe:	ff d0                	call   eax
10033a00:	3c 01                	cmp    al,0x1
10033a02:	75 28                	jne    0x10033a2c
10033a04:	a1 00 26 1b 10       	mov    eax,ds:0x101b2600
10033a09:	6a 00                	push   0x0
10033a0b:	8b 88 7c 14 00 00    	mov    ecx,DWORD PTR [eax+0x147c]
10033a11:	8b 01                	mov    eax,DWORD PTR [ecx]
10033a13:	ff 50 24             	call   DWORD PTR [eax+0x24]
10033a16:	51                   	push   ecx
10033a17:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10033a1e:	68 7c 49 14 10       	push   0x1014497c
10033a23:	ff 15 60 26 1b 10    	call   DWORD PTR ds:0x101b2660
10033a29:	83 c4 08             	add    esp,0x8
10033a2c:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10033a32:	e8 99 70 07 00       	call   0x100aaad0
10033a37:	e8 24 d0 04 00       	call   0x10080a60
10033a3c:	8b 0d 00 26 1b 10    	mov    ecx,DWORD PTR ds:0x101b2600
10033a42:	8b 91 7c 14 00 00    	mov    edx,DWORD PTR [ecx+0x147c]
10033a48:	81 c2 cc 00 00 00    	add    edx,0xcc
10033a4e:	66 90                	xchg   ax,ax
10033a50:	8a 08                	mov    cl,BYTE PTR [eax]
10033a52:	8d 40 01             	lea    eax,[eax+0x1]
10033a55:	88 0a                	mov    BYTE PTR [edx],cl
10033a57:	8d 52 01             	lea    edx,[edx+0x1]
10033a5a:	84 c9                	test   cl,cl
10033a5c:	75 f2                	jne    0x10033a50
10033a5e:	b8 01 00 00 00       	mov    eax,0x1
10033a63:	5d                   	pop    ebp
10033a64:	c3                   	ret
