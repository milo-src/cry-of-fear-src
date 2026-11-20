
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100be8e0 <.text+0xbd8e0>:
100be8e0:	55                   	push   ebp
100be8e1:	8b ec                	mov    ebp,esp
100be8e3:	83 ec 58             	sub    esp,0x58
100be8e6:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100be8ed:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100be8f0:	75 17                	jne    0x100be909
100be8f2:	68 bc 50 1d 10       	push   0x101d50bc
100be8f7:	6a 02                	push   0x2
100be8f9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100be8ff:	83 c4 08             	add    esp,0x8
100be902:	83 c8 ff             	or     eax,0xffffffff
100be905:	8b e5                	mov    esp,ebp
100be907:	5d                   	pop    ebp
100be908:	c3                   	ret
100be909:	8b 0d c8 38 22 10    	mov    ecx,DWORD PTR ds:0x102238c8
100be90f:	33 c0                	xor    eax,eax
100be911:	53                   	push   ebx
100be912:	8b 1d 74 59 22 10    	mov    ebx,DWORD PTR ds:0x10225974
100be918:	3b d9                	cmp    ebx,ecx
100be91a:	56                   	push   esi
100be91b:	0f 4d d8             	cmovge ebx,eax
100be91e:	57                   	push   edi
100be91f:	33 ff                	xor    edi,edi
100be921:	89 1d 74 59 22 10    	mov    DWORD PTR ds:0x10225974,ebx
100be927:	85 c9                	test   ecx,ecx
100be929:	0f 8e 04 01 00 00    	jle    0x100bea33
100be92f:	90                   	nop
100be930:	8d 04 3b             	lea    eax,[ebx+edi*1]
100be933:	99                   	cdq
100be934:	f7 f9                	idiv   ecx
100be936:	8b c2                	mov    eax,edx
100be938:	6b f0 58             	imul   esi,eax,0x58
100be93b:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100be93e:	03 35 bc 38 22 10    	add    esi,DWORD PTR ds:0x102238bc
100be944:	0f b7 56 50          	movzx  edx,WORD PTR [esi+0x50]
100be948:	66 85 d2             	test   dx,dx
100be94b:	0f 84 d9 00 00 00    	je     0x100bea2a
100be951:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
100be954:	8b cb                	mov    ecx,ebx
100be956:	52                   	push   edx
100be957:	8b 03                	mov    eax,DWORD PTR [ebx]
100be959:	ff 90 e0 01 00 00    	call   DWORD PTR [eax+0x1e0]
100be95f:	85 c0                	test   eax,eax
100be961:	0f 84 b7 00 00 00    	je     0x100bea1e
100be967:	0f b7 46 52          	movzx  eax,WORD PTR [esi+0x52]
100be96b:	66 85 c0             	test   ax,ax
100be96e:	74 12                	je     0x100be982
100be970:	98                   	cwde
100be971:	8b cb                	mov    ecx,ebx
100be973:	50                   	push   eax
100be974:	e8 d7 ff f4 ff       	call   0x1000e950
100be979:	83 f8 ff             	cmp    eax,0xffffffff
100be97c:	0f 84 9c 00 00 00    	je     0x100bea1e
100be982:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100be985:	8d 4d a8             	lea    ecx,[ebp-0x58]
100be988:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100be98c:	51                   	push   ecx
100be98d:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
100be994:	00 
100be995:	f3 0f 10 88 80 01 00 	movss  xmm1,DWORD PTR [eax+0x180]
100be99c:	00 
100be99d:	f3 0f 58 80 78 01 00 	addss  xmm0,DWORD PTR [eax+0x178]
100be9a4:	00 
100be9a5:	f3 0f 58 56 04       	addss  xmm2,DWORD PTR [esi+0x4]
100be9aa:	f3 0f 58 4e 08       	addss  xmm1,DWORD PTR [esi+0x8]
100be9af:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
100be9b4:	f3 0f 11 55 f0       	movss  DWORD PTR [ebp-0x10],xmm2
100be9b9:	f3 0f 11 4d f4       	movss  DWORD PTR [ebp-0xc],xmm1
100be9be:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
100be9c5:	00 
100be9c6:	f3 0f 10 88 80 01 00 	movss  xmm1,DWORD PTR [eax+0x180]
100be9cd:	00 
100be9ce:	f3 0f 10 80 78 01 00 	movss  xmm0,DWORD PTR [eax+0x178]
100be9d5:	00 
100be9d6:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
100be9db:	f3 0f 58 48 10       	addss  xmm1,DWORD PTR [eax+0x10]
100be9e0:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
100be9e5:	f3 0f 11 55 e4       	movss  DWORD PTR [ebp-0x1c],xmm2
100be9ea:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
100be9ef:	f3 0f 11 45 e0       	movss  DWORD PTR [ebp-0x20],xmm0
100be9f4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100be9fa:	8d 45 ec             	lea    eax,[ebp-0x14]
100be9fd:	6a 01                	push   0x1
100be9ff:	50                   	push   eax
100bea00:	8d 45 e0             	lea    eax,[ebp-0x20]
100bea03:	50                   	push   eax
100bea04:	e8 f7 bd 05 00       	call   0x1011a800
100bea09:	f3 0f 10 45 b8       	movss  xmm0,DWORD PTR [ebp-0x48]
100bea0e:	83 c4 14             	add    esp,0x14
100bea11:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100bea18:	9f                   	lahf
100bea19:	f6 c4 44             	test   ah,0x44
100bea1c:	7b 29                	jnp    0x100bea47
100bea1e:	8b 1d 74 59 22 10    	mov    ebx,DWORD PTR ds:0x10225974
100bea24:	8b 0d c8 38 22 10    	mov    ecx,DWORD PTR ds:0x102238c8
100bea2a:	47                   	inc    edi
100bea2b:	3b f9                	cmp    edi,ecx
100bea2d:	0f 8c fd fe ff ff    	jl     0x100be930
100bea33:	5f                   	pop    edi
100bea34:	5e                   	pop    esi
100bea35:	c7 05 74 59 22 10 00 	mov    DWORD PTR ds:0x10225974,0x0
100bea3c:	00 00 00 
100bea3f:	83 c8 ff             	or     eax,0xffffffff
100bea42:	5b                   	pop    ebx
100bea43:	8b e5                	mov    esp,ebp
100bea45:	5d                   	pop    ebp
100bea46:	c3                   	ret
100bea47:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100bea4a:	5f                   	pop    edi
100bea4b:	5e                   	pop    esi
100bea4c:	5b                   	pop    ebx
100bea4d:	8d 41 01             	lea    eax,[ecx+0x1]
100bea50:	a3 74 59 22 10       	mov    ds:0x10225974,eax
100bea55:	8b c1                	mov    eax,ecx
100bea57:	8b e5                	mov    esp,ebp
100bea59:	5d                   	pop    ebp
100bea5a:	c3                   	ret
