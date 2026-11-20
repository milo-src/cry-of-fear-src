; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
1007f940:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
1007f947:	c6 01 01             	mov    BYTE PTR [ecx],0x1
1007f94a:	0f 84 85 00 00 00    	je     0x1007f9d5
1007f950:	c7 81 c8 00 00 00 00 	mov    DWORD PTR [ecx+0xc8],0x0
1007f957:	00 00 00 
1007f95a:	b8 01 00 00 00       	mov    eax,0x1
1007f95f:	c7 41 04 00 00 00 00 	mov    DWORD PTR [ecx+0x4],0x0
1007f966:	c7 41 2c 00 00 00 00 	mov    DWORD PTR [ecx+0x2c],0x0
1007f96d:	c7 41 30 00 00 00 00 	mov    DWORD PTR [ecx+0x30],0x0
1007f974:	66 c7 41 34 00 00    	mov    WORD PTR [ecx+0x34],0x0
1007f97a:	c6 41 36 00          	mov    BYTE PTR [ecx+0x36],0x0
1007f97e:	c7 81 b8 00 00 00 00 	mov    DWORD PTR [ecx+0xb8],0x0
1007f985:	00 00 00 
1007f988:	c7 81 bc 00 00 00 00 	mov    DWORD PTR [ecx+0xbc],0x0
1007f98f:	00 00 00 
1007f992:	c7 81 c0 00 00 00 00 	mov    DWORD PTR [ecx+0xc0],0x0
1007f999:	00 00 00 
1007f99c:	c6 81 c4 00 00 00 00 	mov    BYTE PTR [ecx+0xc4],0x0
1007f9a3:	c7 81 cc 00 00 00 00 	mov    DWORD PTR [ecx+0xcc],0x0
1007f9aa:	00 00 00 
1007f9ad:	c7 81 d0 00 00 00 00 	mov    DWORD PTR [ecx+0xd0],0x0
1007f9b4:	00 00 00 
1007f9b7:	c7 81 d4 00 00 00 00 	mov    DWORD PTR [ecx+0xd4],0x0
1007f9be:	00 00 00 
1007f9c1:	c7 81 d8 00 00 00 00 	mov    DWORD PTR [ecx+0xd8],0x0
1007f9c8:	00 00 00 
1007f9cb:	66 c7 81 dc 00 00 00 	mov    WORD PTR [ecx+0xdc],0x0
1007f9d2:	00 00 
1007f9d4:	c3                   	ret
1007f9d5:	33 c0                	xor    eax,eax
1007f9d7:	c3                   	ret
1007f9d8:	cc                   	int3
1007f9d9:	cc                   	int3
1007f9da:	cc                   	int3
1007f9db:	cc                   	int3
1007f9dc:	cc                   	int3
1007f9dd:	cc                   	int3
1007f9de:	cc                   	int3
1007f9df:	cc                   	int3
1007f9e0:	55                   	push   ebp
1007f9e1:	8b ec                	mov    ebp,esp
1007f9e3:	51                   	push   ecx
1007f9e4:	e8 57 00 00 00       	call   0x1007fa40
1007f9e9:	68 e0 00 00 00       	push   0xe0
1007f9ee:	e8 d8 4a 03 00       	call   0x100b44cb
1007f9f3:	83 c4 04             	add    esp,0x4
1007f9f6:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1007f9f9:	85 c0                	test   eax,eax
1007f9fb:	74 30                	je     0x1007fa2d
1007f9fd:	8b c8                	mov    ecx,eax
1007f9ff:	e8 dc fc ff ff       	call   0x1007f6e0
1007fa04:	a3 a4 40 54 10       	mov    ds:0x105440a4,eax
1007fa09:	85 c0                	test   eax,eax
1007fa0b:	74 2a                	je     0x1007fa37
1007fa0d:	68 98 09 15 10       	push   0x10150998
1007fa12:	6a 00                	push   0x0
1007fa14:	6a 3d                	push   0x3d
1007fa16:	6a 00                	push   0x0
1007fa18:	c6 00 00             	mov    BYTE PTR [eax],0x0
1007fa1b:	ff 15 08 a3 13 10    	call   DWORD PTR ds:0x1013a308
1007fa21:	83 c4 10             	add    esp,0x10
1007fa24:	a3 a8 40 54 10       	mov    ds:0x105440a8,eax
1007fa29:	8b e5                	mov    esp,ebp
1007fa2b:	5d                   	pop    ebp
1007fa2c:	c3                   	ret
1007fa2d:	c7 05 a4 40 54 10 00 	mov    DWORD PTR ds:0x105440a4,0x0
1007fa34:	00 00 00 
1007fa37:	8b e5                	mov    esp,ebp
1007fa39:	5d                   	pop    ebp
1007fa3a:	c3                   	ret
1007fa3b:	cc                   	int3
1007fa3c:	cc                   	int3
1007fa3d:	cc                   	int3
1007fa3e:	cc                   	int3
1007fa3f:	cc                   	int3
1007fa40:	8b 0d a8 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a8
1007fa46:	85 c9                	test   ecx,ecx
1007fa48:	74 17                	je     0x1007fa61
1007fa4a:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1007fa4d:	83 c1 04             	add    ecx,0x4
1007fa50:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1007fa53:	03 c8                	add    ecx,eax
1007fa55:	83 41 04 ff          	add    DWORD PTR [ecx+0x4],0xffffffff
1007fa59:	75 06                	jne    0x1007fa61
1007fa5b:	8b 01                	mov    eax,DWORD PTR [ecx]
1007fa5d:	6a 01                	push   0x1
1007fa5f:	ff 10                	call   DWORD PTR [eax]
1007fa61:	a1 a4 40 54 10       	mov    eax,ds:0x105440a4
1007fa66:	85 c0                	test   eax,eax
1007fa68:	74 18                	je     0x1007fa82
1007fa6a:	68 e0 00 00 00       	push   0xe0
1007fa6f:	50                   	push   eax
1007fa70:	e8 2f 48 03 00       	call   0x100b42a4
1007fa75:	83 c4 08             	add    esp,0x8
1007fa78:	c7 05 a4 40 54 10 00 	mov    DWORD PTR ds:0x105440a4,0x0
1007fa7f:	00 00 00 
1007fa82:	c3                   	ret
1007fa83:	cc                   	int3
1007fa84:	cc                   	int3
1007fa85:	cc                   	int3
1007fa86:	cc                   	int3
1007fa87:	cc                   	int3
1007fa88:	cc                   	int3
1007fa89:	cc                   	int3
1007fa8a:	cc                   	int3
1007fa8b:	cc                   	int3
1007fa8c:	cc                   	int3
1007fa8d:	cc                   	int3
1007fa8e:	cc                   	int3
1007fa8f:	cc                   	int3
1007fa90:	56                   	push   esi
1007fa91:	8b 35 a4 40 54 10    	mov    esi,DWORD PTR ds:0x105440a4
1007fa97:	85 f6                	test   esi,esi
1007fa99:	74 14                	je     0x1007faaf
1007fa9b:	80 3e 00             	cmp    BYTE PTR [esi],0x0
1007fa9e:	75 07                	jne    0x1007faa7
1007faa0:	8b ce                	mov    ecx,esi
1007faa2:	e8 99 fe ff ff       	call   0x1007f940
1007faa7:	8b ce                	mov    ecx,esi
1007faa9:	5e                   	pop    esi
1007faaa:	e9 91 fc ff ff       	jmp    0x1007f740
1007faaf:	5e                   	pop    esi
1007fab0:	c3                   	ret
1007fab1:	cc                   	int3
1007fab2:	cc                   	int3
1007fab3:	cc                   	int3
1007fab4:	cc                   	int3
1007fab5:	cc                   	int3
1007fab6:	cc                   	int3
1007fab7:	cc                   	int3
1007fab8:	cc                   	int3
1007fab9:	cc                   	int3
1007faba:	cc                   	int3
1007fabb:	cc                   	int3
1007fabc:	cc                   	int3
1007fabd:	cc                   	int3
1007fabe:	cc                   	int3
1007fabf:	cc                   	int3
1007fac0:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fac6:	85 c9                	test   ecx,ecx
1007fac8:	0f 85 72 fe ff ff    	jne    0x1007f940
1007face:	c3                   	ret
1007facf:	cc                   	int3
1007fad0:	a1 a4 40 54 10       	mov    eax,ds:0x105440a4
1007fad5:	85 c0                	test   eax,eax
1007fad7:	74 0c                	je     0x1007fae5
1007fad9:	83 b8 bc 00 00 00 00 	cmp    DWORD PTR [eax+0xbc],0x0
1007fae0:	74 03                	je     0x1007fae5
1007fae2:	b0 01                	mov    al,0x1
1007fae4:	c3                   	ret
1007fae5:	32 c0                	xor    al,al
1007fae7:	c3                   	ret
1007fae8:	cc                   	int3
1007fae9:	cc                   	int3
1007faea:	cc                   	int3
1007faeb:	cc                   	int3
1007faec:	cc                   	int3
1007faed:	cc                   	int3
1007faee:	cc                   	int3
1007faef:	cc                   	int3
1007faf0:	55                   	push   ebp
1007faf1:	8b ec                	mov    ebp,esp
1007faf3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007faf9:	85 c9                	test   ecx,ecx
1007fafb:	74 08                	je     0x1007fb05
1007fafd:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1007fb00:	e8 4b 02 00 00       	call   0x1007fd50
1007fb05:	5d                   	pop    ebp
1007fb06:	c3                   	ret
1007fb07:	cc                   	int3
1007fb08:	cc                   	int3
1007fb09:	cc                   	int3
1007fb0a:	cc                   	int3
1007fb0b:	cc                   	int3
1007fb0c:	cc                   	int3
1007fb0d:	cc                   	int3
1007fb0e:	cc                   	int3
1007fb0f:	cc                   	int3
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
1007fb4f:	cc                   	int3
1007fb50:	55                   	push   ebp
1007fb51:	8b ec                	mov    ebp,esp
1007fb53:	a1 a4 40 54 10       	mov    eax,ds:0x105440a4
1007fb58:	85 c0                	test   eax,eax
1007fb5a:	74 4b                	je     0x1007fba7
1007fb5c:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
1007fb61:	0f 57 c0             	xorps  xmm0,xmm0
1007fb64:	0f 2f c8             	comiss xmm1,xmm0
1007fb67:	72 08                	jb     0x1007fb71
1007fb69:	f3 0f 11 88 cc 00 00 	movss  DWORD PTR [eax+0xcc],xmm1
1007fb70:	00 
1007fb71:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1007fb76:	0f 2f c8             	comiss xmm1,xmm0
1007fb79:	72 08                	jb     0x1007fb83
1007fb7b:	f3 0f 11 88 d0 00 00 	movss  DWORD PTR [eax+0xd0],xmm1
1007fb82:	00 
1007fb83:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
1007fb88:	0f 2f c8             	comiss xmm1,xmm0
1007fb8b:	72 08                	jb     0x1007fb95
1007fb8d:	f3 0f 11 88 d4 00 00 	movss  DWORD PTR [eax+0xd4],xmm1
1007fb94:	00 
1007fb95:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
1007fb9a:	0f 2f c8             	comiss xmm1,xmm0
1007fb9d:	72 08                	jb     0x1007fba7
1007fb9f:	f3 0f 11 88 d8 00 00 	movss  DWORD PTR [eax+0xd8],xmm1
1007fba6:	00 
1007fba7:	5d                   	pop    ebp
1007fba8:	c3                   	ret
1007fba9:	cc                   	int3
1007fbaa:	cc                   	int3
1007fbab:	cc                   	int3
1007fbac:	cc                   	int3
1007fbad:	cc                   	int3
1007fbae:	cc                   	int3
1007fbaf:	cc                   	int3
1007fbb0:	55                   	push   ebp
1007fbb1:	8b ec                	mov    ebp,esp
1007fbb3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fbb9:	85 c9                	test   ecx,ecx
1007fbbb:	74 09                	je     0x1007fbc6
1007fbbd:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
1007fbc0:	88 81 dc 00 00 00    	mov    BYTE PTR [ecx+0xdc],al
1007fbc6:	5d                   	pop    ebp
1007fbc7:	c3                   	ret
1007fbc8:	cc                   	int3
1007fbc9:	cc                   	int3
1007fbca:	cc                   	int3
1007fbcb:	cc                   	int3
1007fbcc:	cc                   	int3
1007fbcd:	cc                   	int3
1007fbce:	cc                   	int3
1007fbcf:	cc                   	int3
1007fbd0:	55                   	push   ebp
1007fbd1:	8b ec                	mov    ebp,esp
1007fbd3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fbd9:	85 c9                	test   ecx,ecx
1007fbdb:	74 08                	je     0x1007fbe5
1007fbdd:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1007fbe0:	e8 2b 0b 00 00       	call   0x10080710
1007fbe5:	5d                   	pop    ebp
1007fbe6:	c3                   	ret
1007fbe7:	cc                   	int3
1007fbe8:	cc                   	int3
1007fbe9:	cc                   	int3
1007fbea:	cc                   	int3
1007fbeb:	cc                   	int3
1007fbec:	cc                   	int3
1007fbed:	cc                   	int3
1007fbee:	cc                   	int3
1007fbef:	cc                   	int3
1007fbf0:	55                   	push   ebp
1007fbf1:	8b ec                	mov    ebp,esp
1007fbf3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fbf9:	85 c9                	test   ecx,ecx
1007fbfb:	74 09                	je     0x1007fc06
1007fbfd:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
1007fc00:	88 81 dd 00 00 00    	mov    BYTE PTR [ecx+0xdd],al
1007fc06:	5d                   	pop    ebp
1007fc07:	c3                   	ret
1007fc08:	cc                   	int3
1007fc09:	cc                   	int3
1007fc0a:	cc                   	int3
1007fc0b:	cc                   	int3
1007fc0c:	cc                   	int3
1007fc0d:	cc                   	int3
1007fc0e:	cc                   	int3
1007fc0f:	cc                   	int3
1007fc10:	55                   	push   ebp
1007fc11:	8b ec                	mov    ebp,esp
1007fc13:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fc19:	85 c9                	test   ecx,ecx
1007fc1b:	74 10                	je     0x1007fc2d
1007fc1d:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1007fc22:	51                   	push   ecx
1007fc23:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1007fc28:	e8 53 0b 00 00       	call   0x10080780
1007fc2d:	5d                   	pop    ebp
1007fc2e:	c3                   	ret
1007fc2f:	cc                   	int3
