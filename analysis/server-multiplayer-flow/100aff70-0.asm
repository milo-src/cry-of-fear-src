
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100aff70 <.text+0xaef70>:
100aff70:	55                   	push   ebp
100aff71:	8b ec                	mov    ebp,esp
100aff73:	81 ec 88 00 00 00    	sub    esp,0x88
100aff79:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100aff7e:	33 c5                	xor    eax,ebp
100aff80:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100aff83:	53                   	push   ebx
100aff84:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100aff87:	56                   	push   esi
100aff88:	57                   	push   edi
100aff89:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100aff8c:	8b f1                	mov    esi,ecx
100aff8e:	89 9d 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],ebx
100aff94:	85 ff                	test   edi,edi
100aff96:	0f 84 56 02 00 00    	je     0x100b01f2
100aff9c:	85 db                	test   ebx,ebx
100aff9e:	0f 84 4e 02 00 00    	je     0x100b01f2
100affa4:	80 7e 08 00          	cmp    BYTE PTR [esi+0x8],0x0
100affa8:	74 56                	je     0x100b0000
100affaa:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100affad:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100affb3:	6a 00                	push   0x0
100affb5:	ff 35 18 65 22 10    	push   DWORD PTR ds:0x10226518
100affbb:	6a 01                	push   0x1
100affbd:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100affc3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100affc6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100affcc:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100affd2:	50                   	push   eax
100affd3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100affd9:	68 e4 e2 1c 10       	push   0x101ce2e4
100affde:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100affe4:	83 c4 1c             	add    esp,0x1c
100affe7:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100affed:	5f                   	pop    edi
100affee:	5e                   	pop    esi
100affef:	5b                   	pop    ebx
100afff0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100afff3:	33 cd                	xor    ecx,ebp
100afff5:	e8 b9 db 08 00       	call   0x1013dbb3
100afffa:	8b e5                	mov    esp,ebp
100afffc:	5d                   	pop    ebp
100afffd:	c2 08 00             	ret    0x8
100b0000:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b0003:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b0009:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100b000f:	83 c4 04             	add    esp,0x4
100b0012:	85 c0                	test   eax,eax
100b0014:	74 6f                	je     0x100b0085
100b0016:	ba 04 e3 1c 10       	mov    edx,0x101ce304
100b001b:	8b c8                	mov    ecx,eax
100b001d:	0f 1f 00             	nop    DWORD PTR [eax]
100b0020:	8a 19                	mov    bl,BYTE PTR [ecx]
100b0022:	3a 1a                	cmp    bl,BYTE PTR [edx]
100b0024:	75 1a                	jne    0x100b0040
100b0026:	84 db                	test   bl,bl
100b0028:	74 12                	je     0x100b003c
100b002a:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
100b002d:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
100b0030:	75 0e                	jne    0x100b0040
100b0032:	83 c1 02             	add    ecx,0x2
100b0035:	83 c2 02             	add    edx,0x2
100b0038:	84 db                	test   bl,bl
100b003a:	75 e4                	jne    0x100b0020
100b003c:	33 c9                	xor    ecx,ecx
100b003e:	eb 05                	jmp    0x100b0045
100b0040:	1b c9                	sbb    ecx,ecx
100b0042:	83 c9 01             	or     ecx,0x1
100b0045:	85 c9                	test   ecx,ecx
100b0047:	0f 84 a5 01 00 00    	je     0x100b01f2
100b004d:	b9 18 e3 1c 10       	mov    ecx,0x101ce318
100b0052:	8a 10                	mov    dl,BYTE PTR [eax]
100b0054:	3a 11                	cmp    dl,BYTE PTR [ecx]
100b0056:	75 1a                	jne    0x100b0072
100b0058:	84 d2                	test   dl,dl
100b005a:	74 12                	je     0x100b006e
100b005c:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100b005f:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100b0062:	75 0e                	jne    0x100b0072
100b0064:	83 c0 02             	add    eax,0x2
100b0067:	83 c1 02             	add    ecx,0x2
100b006a:	84 d2                	test   dl,dl
100b006c:	75 e4                	jne    0x100b0052
100b006e:	33 c0                	xor    eax,eax
100b0070:	eb 05                	jmp    0x100b0077
100b0072:	1b c0                	sbb    eax,eax
100b0074:	83 c8 01             	or     eax,0x1
100b0077:	85 c0                	test   eax,eax
100b0079:	0f 84 73 01 00 00    	je     0x100b01f2
100b007f:	8b 9d 78 ff ff ff    	mov    ebx,DWORD PTR [ebp-0x88]
100b0085:	68 60 b6 1c 10       	push   0x101cb660
100b008a:	c6 46 08 01          	mov    BYTE PTR [esi+0x8],0x1
100b008e:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100b0094:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0099:	d8 00                	fadd   DWORD PTR [eax]
100b009b:	d9 5e 0c             	fstp   DWORD PTR [esi+0xc]
100b009e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b00a1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b00a7:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100b00ad:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
100b00b0:	0f 57 c0             	xorps  xmm0,xmm0
100b00b3:	c7 46 14 00 00 00 00 	mov    DWORD PTR [esi+0x14],0x0
100b00ba:	c7 46 10 00 00 00 00 	mov    DWORD PTR [esi+0x10],0x0
100b00c1:	0f 11 46 20          	movups XMMWORD PTR [esi+0x20],xmm0
100b00c5:	0f 11 46 30          	movups XMMWORD PTR [esi+0x30],xmm0
100b00c9:	0f 11 46 40          	movups XMMWORD PTR [esi+0x40],xmm0
100b00cd:	0f 11 46 50          	movups XMMWORD PTR [esi+0x50],xmm0
100b00d1:	0f 11 46 60          	movups XMMWORD PTR [esi+0x60],xmm0
100b00d5:	0f 11 46 70          	movups XMMWORD PTR [esi+0x70],xmm0
100b00d9:	0f 11 86 80 00 00 00 	movups XMMWORD PTR [esi+0x80],xmm0
100b00e0:	0f 11 86 90 00 00 00 	movups XMMWORD PTR [esi+0x90],xmm0
100b00e7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b00ec:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100b00ef:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100b00f5:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
100b00fb:	50                   	push   eax
100b00fc:	68 28 e3 1c 10       	push   0x101ce328
100b0101:	e8 fa 90 06 00       	call   0x10119200
100b0106:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100b0109:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b010f:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100b0115:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
100b0118:	c7 46 10 01 00 00 00 	mov    DWORD PTR [esi+0x10],0x1
100b011f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0124:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100b0127:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100b012d:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
100b0133:	50                   	push   eax
100b0134:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100b013a:	68 48 e3 1c 10       	push   0x101ce348
100b013f:	50                   	push   eax
100b0140:	e8 1b f0 f6 ff       	call   0x1001f160
100b0145:	83 c4 20             	add    esp,0x20
100b0148:	6a 64                	push   0x64
100b014a:	6a 00                	push   0x0
100b014c:	83 ec 08             	sub    esp,0x8
100b014f:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100b0156:	00 
100b0157:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100b015e:	68 fc 8f 1a 10       	push   0x101a8ffc
100b0163:	68 34 2f 22 10       	push   0x10222f34
100b0168:	6a 00                	push   0x0
100b016a:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100b0170:	83 c4 04             	add    esp,0x4
100b0173:	50                   	push   eax
100b0174:	e8 37 81 06 00       	call   0x101182b0
100b0179:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b017e:	be 01 00 00 00       	mov    esi,0x1
100b0183:	83 c4 1c             	add    esp,0x1c
100b0186:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100b018c:	7c 64                	jl     0x100b01f2
100b018e:	66 90                	xchg   ax,ax
100b0190:	56                   	push   esi
100b0191:	e8 ea 94 06 00       	call   0x10119680
100b0196:	8b f8                	mov    edi,eax
100b0198:	83 c4 04             	add    esp,0x4
100b019b:	85 ff                	test   edi,edi
100b019d:	74 45                	je     0x100b01e4
100b019f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100b01a2:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100b01a8:	6a 00                	push   0x0
100b01aa:	ff 35 18 65 22 10    	push   DWORD PTR ds:0x10226518
100b01b0:	6a 01                	push   0x1
100b01b2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100b01b8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100b01bb:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b01c1:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100b01c7:	50                   	push   eax
100b01c8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b01ce:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100b01d4:	50                   	push   eax
100b01d5:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100b01db:	83 c4 1c             	add    esp,0x1c
100b01de:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100b01e4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b01e9:	46                   	inc    esi
100b01ea:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100b01f0:	7e 9e                	jle    0x100b0190
100b01f2:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100b01f5:	5f                   	pop    edi
100b01f6:	5e                   	pop    esi
100b01f7:	33 cd                	xor    ecx,ebp
100b01f9:	5b                   	pop    ebx
100b01fa:	e8 b4 d9 08 00       	call   0x1013dbb3
100b01ff:	8b e5                	mov    esp,ebp
100b0201:	5d                   	pop    ebp
100b0202:	c2 08 00             	ret    0x8
