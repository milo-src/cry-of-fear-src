 1dd696a:	55                   	push   ebp
 1dd696b:	8b ec                	mov    ebp,esp
 1dd696d:	83 ec 10             	sub    esp,0x10
 1dd6970:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
 1dd6977:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
 1dd697a:	24 7f                	and    al,0x7f
 1dd697c:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
 1dd697f:	e8 0d 8d fa ff       	call   0x1d7f691
 1dd6984:	85 c0                	test   eax,eax
 1dd6986:	0f 85 ae 00 00 00    	jne    0x1dd6a3a
 1dd698c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1dd698f:	83 b9 4c 25 00 00 00 	cmp    DWORD PTR [ecx+0x254c],0x0
 1dd6996:	0f 85 9e 00 00 00    	jne    0x1dd6a3a
 1dd699c:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
 1dd699f:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
 1dd69a2:	83 7d f0 01          	cmp    DWORD PTR [ebp-0x10],0x1
 1dd69a6:	74 0e                	je     0x1dd69b6
 1dd69a8:	83 7d f0 02          	cmp    DWORD PTR [ebp-0x10],0x2
 1dd69ac:	74 1b                	je     0x1dd69c9
 1dd69ae:	83 7d f0 04          	cmp    DWORD PTR [ebp-0x10],0x4
 1dd69b2:	74 04                	je     0x1dd69b8
 1dd69b4:	eb 24                	jmp    0x1dd69da
 1dd69b6:	eb 37                	jmp    0x1dd69ef
 1dd69b8:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1dd69bb:	50                   	push   eax
 1dd69bc:	e8 7c f1 f6 ff       	call   0x1d45b3d
 1dd69c1:	83 c4 04             	add    esp,0x4
 1dd69c4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1dd69c7:	eb 26                	jmp    0x1dd69ef
 1dd69c9:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1dd69cc:	51                   	push   ecx
 1dd69cd:	e8 44 f1 f6 ff       	call   0x1d45b16
 1dd69d2:	83 c4 04             	add    esp,0x4
 1dd69d5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1dd69d8:	eb 15                	jmp    0x1dd69ef
 1dd69da:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
 1dd69dd:	52                   	push   edx
 1dd69de:	68 7c ac ec 01       	push   0x1ecac7c
 1dd69e3:	e8 b1 40 f7 ff       	call   0x1d4aa99
 1dd69e8:	83 c4 08             	add    esp,0x8
 1dd69eb:	33 c0                	xor    eax,eax
 1dd69ed:	eb 50                	jmp    0x1dd6a3f
 1dd69ef:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
 1dd69f3:	74 45                	je     0x1dd6a3a
 1dd69f5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1dd69f8:	8b 88 9c 4b 00 00    	mov    ecx,DWORD PTR [eax+0x4b9c]
 1dd69fe:	81 c1 88 00 00 00    	add    ecx,0x88
 1dd6a04:	51                   	push   ecx
 1dd6a05:	e8 bd 69 00 00       	call   0x1ddd3c7
 1dd6a0a:	83 c4 04             	add    esp,0x4
 1dd6a0d:	83 e8 01             	sub    eax,0x1
 1dd6a10:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
 1dd6a13:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
 1dd6a16:	c1 fa 03             	sar    edx,0x3
 1dd6a19:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1dd6a1c:	33 c9                	xor    ecx,ecx
 1dd6a1e:	8a 0c 10             	mov    cl,BYTE PTR [eax+edx*1]
 1dd6a21:	8b d1                	mov    edx,ecx
 1dd6a23:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
 1dd6a26:	83 e1 07             	and    ecx,0x7
 1dd6a29:	b8 01 00 00 00       	mov    eax,0x1
 1dd6a2e:	d3 e0                	shl    eax,cl
 1dd6a30:	23 d0                	and    edx,eax
 1dd6a32:	85 d2                	test   edx,edx
 1dd6a34:	75 04                	jne    0x1dd6a3a
 1dd6a36:	33 c0                	xor    eax,eax
 1dd6a38:	eb 05                	jmp    0x1dd6a3f
 1dd6a3a:	b8 01 00 00 00       	mov    eax,0x1
 1dd6a3f:	8b e5                	mov    esp,ebp
 1dd6a41:	5d                   	pop    ebp
 1dd6a42:	c3                   	ret
