1007fb10:	55                   	push   ebp
1007fb11:	8b ec                	mov    ebp,esp
1007fb13:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fb19:	85 c9                	test   ecx,ecx
1007fb1b:	74 30                	je     0x1007fb4d
1007fb1d:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1007fb22:	83 ec 0c             	sub    esp,0xc
1007fb25:	8b c4                	mov    eax,esp
1007fb27:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1007fb2a:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1007fb2e:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1007fb33:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1007fb36:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1007fb3b:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
1007fb40:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1007fb43:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1007fb48:	e8 c3 08 00 00       	call   0x10080410
1007fb4d:	5d                   	pop    ebp
1007fb4e:	c3                   	ret
