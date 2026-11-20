
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ccea0 <.text+0xcbea0>:
100ccea0:	55                   	push   ebp
100ccea1:	8b ec                	mov    ebp,esp
100ccea3:	83 ec 10             	sub    esp,0x10
100ccea6:	53                   	push   ebx
100ccea7:	56                   	push   esi
100ccea8:	8b f1                	mov    esi,ecx
100cceaa:	57                   	push   edi
100cceab:	83 3e 00             	cmp    DWORD PTR [esi],0x0
100cceae:	0f 84 55 06 00 00    	je     0x100cd509
100cceb4:	83 7e 04 00          	cmp    DWORD PTR [esi+0x4],0x0
100cceb8:	0f 84 4b 06 00 00    	je     0x100cd509
100ccebe:	8d 45 fc             	lea    eax,[ebp-0x4]
100ccec1:	50                   	push   eax
100ccec2:	ff 15 a0 30 22 10    	call   DWORD PTR ds:0x102230a0
100ccec8:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100ccecb:	8d 45 fc             	lea    eax,[ebp-0x4]
100ccece:	6a 0c                	push   0xc
100cced0:	57                   	push   edi
100cced1:	50                   	push   eax
100cced2:	ff 15 a4 30 22 10    	call   DWORD PTR ds:0x102230a4
100cced8:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
100ccedb:	ff 15 ac 30 22 10    	call   DWORD PTR ds:0x102230ac
100ccee1:	8b c8                	mov    ecx,eax
100ccee3:	83 c4 14             	add    esp,0x14
100ccee6:	83 e1 7f             	and    ecx,0x7f
100ccee9:	c1 e1 04             	shl    ecx,0x4
100cceec:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
100cceef:	f3 0f 10 84 31 7c 18 	movss  xmm0,DWORD PTR [ecx+esi*1+0x187c]
100ccef6:	00 00 
100ccef8:	0f 2e 07             	ucomiss xmm0,DWORD PTR [edi]
100ccefb:	9f                   	lahf
100ccefc:	f6 c4 44             	test   ah,0x44
100cceff:	7a 37                	jp     0x100ccf38
100ccf01:	f3 0f 10 84 31 80 18 	movss  xmm0,DWORD PTR [ecx+esi*1+0x1880]
100ccf08:	00 00 
100ccf0a:	0f 2e 47 04          	ucomiss xmm0,DWORD PTR [edi+0x4]
100ccf0e:	9f                   	lahf
100ccf0f:	f6 c4 44             	test   ah,0x44
100ccf12:	7a 24                	jp     0x100ccf38
100ccf14:	f3 0f 10 84 31 84 18 	movss  xmm0,DWORD PTR [ecx+esi*1+0x1884]
100ccf1b:	00 00 
100ccf1d:	0f 2e 47 08          	ucomiss xmm0,DWORD PTR [edi+0x8]
100ccf21:	9f                   	lahf
100ccf22:	f6 c4 44             	test   ah,0x44
100ccf25:	7a 11                	jp     0x100ccf38
100ccf27:	0f bf 84 31 88 18 00 	movsx  eax,WORD PTR [ecx+esi*1+0x1888]
100ccf2e:	00 
100ccf2f:	5f                   	pop    edi
100ccf30:	5e                   	pop    esi
100ccf31:	5b                   	pop    ebx
100ccf32:	8b e5                	mov    esp,ebp
100ccf34:	5d                   	pop    ebp
100ccf35:	c2 08 00             	ret    0x8
100ccf38:	83 86 60 18 00 00 01 	add    DWORD PTR [esi+0x1860],0x1
100ccf3f:	75 30                	jne    0x100ccf71
100ccf41:	33 c0                	xor    eax,eax
100ccf43:	33 d2                	xor    edx,edx
100ccf45:	39 46 18             	cmp    DWORD PTR [esi+0x18],eax
100ccf48:	7e 20                	jle    0x100ccf6a
100ccf4a:	33 c9                	xor    ecx,ecx
100ccf4c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100ccf50:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100ccf53:	8d 49 10             	lea    ecx,[ecx+0x10]
100ccf56:	42                   	inc    edx
100ccf57:	c7 44 01 fc 00 00 00 	mov    DWORD PTR [ecx+eax*1-0x4],0x0
100ccf5e:	00 
100ccf5f:	3b 56 18             	cmp    edx,DWORD PTR [esi+0x18]
100ccf62:	7c ec                	jl     0x100ccf50
100ccf64:	8b 86 60 18 00 00    	mov    eax,DWORD PTR [esi+0x1860]
100ccf6a:	40                   	inc    eax
100ccf6b:	89 86 60 18 00 00    	mov    DWORD PTR [esi+0x1860],eax
100ccf71:	b9 7f 00 00 00       	mov    ecx,0x7f
100ccf76:	c7 86 2c 18 00 00 ff 	mov    DWORD PTR [esi+0x182c],0xffffffff
100ccf7d:	ff ff ff 
100ccf80:	8d 86 24 0e 00 00    	lea    eax,[esi+0xe24]
100ccf86:	c7 86 28 18 00 00 f0 	mov    DWORD PTR [esi+0x1828],0x497423f0
100ccf8d:	23 74 49 
100ccf90:	c7 86 30 18 00 00 00 	mov    DWORD PTR [esi+0x1830],0x0
100ccf97:	00 00 00 
100ccf9a:	c7 86 3c 18 00 00 ff 	mov    DWORD PTR [esi+0x183c],0xff
100ccfa1:	00 00 00 
100ccfa4:	c7 86 34 18 00 00 00 	mov    DWORD PTR [esi+0x1834],0x0
100ccfab:	00 00 00 
100ccfae:	c7 86 40 18 00 00 ff 	mov    DWORD PTR [esi+0x1840],0xff
100ccfb5:	00 00 00 
100ccfb8:	c7 86 38 18 00 00 00 	mov    DWORD PTR [esi+0x1838],0x0
100ccfbf:	00 00 00 
100ccfc2:	c7 86 44 18 00 00 ff 	mov    DWORD PTR [esi+0x1844],0xff
100ccfc9:	00 00 00 
100ccfcc:	c7 86 48 18 00 00 00 	mov    DWORD PTR [esi+0x1848],0x0
100ccfd3:	00 00 00 
100ccfd6:	c7 86 54 18 00 00 ff 	mov    DWORD PTR [esi+0x1854],0xff
100ccfdd:	00 00 00 
100ccfe0:	c7 86 4c 18 00 00 00 	mov    DWORD PTR [esi+0x184c],0x0
100ccfe7:	00 00 00 
100ccfea:	c7 86 58 18 00 00 ff 	mov    DWORD PTR [esi+0x1858],0xff
100ccff1:	00 00 00 
100ccff4:	c7 86 50 18 00 00 00 	mov    DWORD PTR [esi+0x1850],0x0
100ccffb:	00 00 00 
100ccffe:	c7 86 5c 18 00 00 ff 	mov    DWORD PTR [esi+0x185c],0xff
100cd005:	00 00 00 
100cd008:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd00b:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd00e:	66 90                	xchg   ax,ax
100cd010:	8b b8 00 f4 ff ff    	mov    edi,DWORD PTR [eax-0xc00]
100cd016:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd018:	7f 7f                	jg     0x100cd099
100cd01a:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd01d:	8b df                	mov    ebx,edi
100cd01f:	c1 e3 04             	shl    ebx,0x4
100cd022:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cd025:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd028:	8b 04 03             	mov    eax,DWORD PTR [ebx+eax*1]
100cd02b:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cd02e:	6b c0 58             	imul   eax,eax,0x58
100cd031:	85 54 08 1c          	test   DWORD PTR [eax+ecx*1+0x1c],edx
100cd035:	74 4f                	je     0x100cd086
100cd037:	0f b6 54 08 19       	movzx  edx,BYTE PTR [eax+ecx*1+0x19]
100cd03c:	3b 96 58 18 00 00    	cmp    edx,DWORD PTR [esi+0x1858]
100cd042:	7f 4f                	jg     0x100cd093
100cd044:	3b 96 4c 18 00 00    	cmp    edx,DWORD PTR [esi+0x184c]
100cd04a:	7c 37                	jl     0x100cd083
100cd04c:	0f b6 44 08 1a       	movzx  eax,BYTE PTR [eax+ecx*1+0x1a]
100cd051:	3b 86 50 18 00 00    	cmp    eax,DWORD PTR [esi+0x1850]
100cd057:	7c 2a                	jl     0x100cd083
100cd059:	3b 86 5c 18 00 00    	cmp    eax,DWORD PTR [esi+0x185c]
100cd05f:	7f 22                	jg     0x100cd083
100cd061:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cd064:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd067:	83 ec 0c             	sub    esp,0xc
100cd06a:	8b cc                	mov    ecx,esp
100cd06c:	8b 02                	mov    eax,DWORD PTR [edx]
100cd06e:	89 01                	mov    DWORD PTR [ecx],eax
100cd070:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100cd073:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cd076:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100cd079:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cd07c:	8b ce                	mov    ecx,esi
100cd07e:	e8 cd ec ff ff       	call   0x100cbd50
100cd083:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd086:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd089:	47                   	inc    edi
100cd08a:	83 c3 10             	add    ebx,0x10
100cd08d:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd08f:	7e 91                	jle    0x100cd022
100cd091:	eb 03                	jmp    0x100cd096
100cd093:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd096:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cd099:	49                   	dec    ecx
100cd09a:	83 e8 04             	sub    eax,0x4
100cd09d:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd0a0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd0a3:	3b 8e 30 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1830]
100cd0a9:	0f 8d 61 ff ff ff    	jge    0x100cd010
100cd0af:	8b 86 34 18 00 00    	mov    eax,DWORD PTR [esi+0x1834]
100cd0b5:	b9 80 00 00 00       	mov    ecx,0x80
100cd0ba:	3b c1                	cmp    eax,ecx
100cd0bc:	0f 4f c8             	cmovg  ecx,eax
100cd0bf:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd0c2:	3b 8e 40 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1840]
100cd0c8:	0f 8f b6 00 00 00    	jg     0x100cd184
100cd0ce:	8d 86 28 10 00 00    	lea    eax,[esi+0x1028]
100cd0d4:	8d 04 88             	lea    eax,[eax+ecx*4]
100cd0d7:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd0da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cd0e0:	8b b8 00 f4 ff ff    	mov    edi,DWORD PTR [eax-0xc00]
100cd0e6:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd0e8:	0f 8f 80 00 00 00    	jg     0x100cd16e
100cd0ee:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd0f1:	8b df                	mov    ebx,edi
100cd0f3:	c1 e3 04             	shl    ebx,0x4
100cd0f6:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cd0f9:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd0fc:	8b 44 03 04          	mov    eax,DWORD PTR [ebx+eax*1+0x4]
100cd100:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cd103:	6b c0 58             	imul   eax,eax,0x58
100cd106:	85 54 08 1c          	test   DWORD PTR [eax+ecx*1+0x1c],edx
100cd10a:	74 4f                	je     0x100cd15b
100cd10c:	0f b6 54 08 1a       	movzx  edx,BYTE PTR [eax+ecx*1+0x1a]
100cd111:	3b 96 5c 18 00 00    	cmp    edx,DWORD PTR [esi+0x185c]
100cd117:	7f 4f                	jg     0x100cd168
100cd119:	3b 96 50 18 00 00    	cmp    edx,DWORD PTR [esi+0x1850]
100cd11f:	7c 37                	jl     0x100cd158
100cd121:	0f b6 44 08 18       	movzx  eax,BYTE PTR [eax+ecx*1+0x18]
100cd126:	3b 86 48 18 00 00    	cmp    eax,DWORD PTR [esi+0x1848]
100cd12c:	7c 2a                	jl     0x100cd158
100cd12e:	3b 86 54 18 00 00    	cmp    eax,DWORD PTR [esi+0x1854]
100cd134:	7f 22                	jg     0x100cd158
100cd136:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cd139:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd13c:	83 ec 0c             	sub    esp,0xc
100cd13f:	8b cc                	mov    ecx,esp
100cd141:	8b 02                	mov    eax,DWORD PTR [edx]
100cd143:	89 01                	mov    DWORD PTR [ecx],eax
100cd145:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100cd148:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cd14b:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100cd14e:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cd151:	8b ce                	mov    ecx,esi
100cd153:	e8 f8 eb ff ff       	call   0x100cbd50
100cd158:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd15b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd15e:	47                   	inc    edi
100cd15f:	83 c3 10             	add    ebx,0x10
100cd162:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd164:	7e 90                	jle    0x100cd0f6
100cd166:	eb 03                	jmp    0x100cd16b
100cd168:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd16b:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cd16e:	41                   	inc    ecx
100cd16f:	83 c0 04             	add    eax,0x4
100cd172:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd175:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd178:	3b 8e 40 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1840]
100cd17e:	0f 8e 5c ff ff ff    	jle    0x100cd0e0
100cd184:	8b 86 44 18 00 00    	mov    eax,DWORD PTR [esi+0x1844]
100cd18a:	b9 7f 00 00 00       	mov    ecx,0x7f
100cd18f:	3b c1                	cmp    eax,ecx
100cd191:	0f 4c c8             	cmovl  ecx,eax
100cd194:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd197:	3b 8e 38 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1838]
100cd19d:	0f 8c ae 00 00 00    	jl     0x100cd251
100cd1a3:	8d 86 28 14 00 00    	lea    eax,[esi+0x1428]
100cd1a9:	8d 04 88             	lea    eax,[eax+ecx*4]
100cd1ac:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd1af:	90                   	nop
100cd1b0:	8b b8 00 f4 ff ff    	mov    edi,DWORD PTR [eax-0xc00]
100cd1b6:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd1b8:	0f 8f 7d 00 00 00    	jg     0x100cd23b
100cd1be:	8b df                	mov    ebx,edi
100cd1c0:	c1 e3 04             	shl    ebx,0x4
100cd1c3:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cd1c6:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cd1c9:	8b 44 18 08          	mov    eax,DWORD PTR [eax+ebx*1+0x8]
100cd1cd:	6b c8 58             	imul   ecx,eax,0x58
100cd1d0:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cd1d3:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100cd1d6:	85 44 11 1c          	test   DWORD PTR [ecx+edx*1+0x1c],eax
100cd1da:	74 4c                	je     0x100cd228
100cd1dc:	0f b6 44 11 18       	movzx  eax,BYTE PTR [ecx+edx*1+0x18]
100cd1e1:	3b 86 54 18 00 00    	cmp    eax,DWORD PTR [esi+0x1854]
100cd1e7:	7f 4c                	jg     0x100cd235
100cd1e9:	3b 86 48 18 00 00    	cmp    eax,DWORD PTR [esi+0x1848]
100cd1ef:	7c 37                	jl     0x100cd228
100cd1f1:	0f b6 44 11 19       	movzx  eax,BYTE PTR [ecx+edx*1+0x19]
100cd1f6:	3b 86 4c 18 00 00    	cmp    eax,DWORD PTR [esi+0x184c]
100cd1fc:	7c 2a                	jl     0x100cd228
100cd1fe:	3b 86 58 18 00 00    	cmp    eax,DWORD PTR [esi+0x1858]
100cd204:	7f 22                	jg     0x100cd228
100cd206:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cd209:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd20c:	83 ec 0c             	sub    esp,0xc
100cd20f:	8b cc                	mov    ecx,esp
100cd211:	8b 02                	mov    eax,DWORD PTR [edx]
100cd213:	89 01                	mov    DWORD PTR [ecx],eax
100cd215:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100cd218:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cd21b:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100cd21e:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cd221:	8b ce                	mov    ecx,esi
100cd223:	e8 28 eb ff ff       	call   0x100cbd50
100cd228:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd22b:	47                   	inc    edi
100cd22c:	83 c3 10             	add    ebx,0x10
100cd22f:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd231:	7e 90                	jle    0x100cd1c3
100cd233:	eb 03                	jmp    0x100cd238
100cd235:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd238:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cd23b:	49                   	dec    ecx
100cd23c:	83 e8 04             	sub    eax,0x4
100cd23f:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd242:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd245:	3b 8e 38 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1838]
100cd24b:	0f 8d 5f ff ff ff    	jge    0x100cd1b0
100cd251:	8b 86 30 18 00 00    	mov    eax,DWORD PTR [esi+0x1830]
100cd257:	b9 80 00 00 00       	mov    ecx,0x80
100cd25c:	3b c1                	cmp    eax,ecx
100cd25e:	0f 4f c8             	cmovg  ecx,eax
100cd261:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd264:	3b 8e 3c 18 00 00    	cmp    ecx,DWORD PTR [esi+0x183c]
100cd26a:	0f 8f b3 00 00 00    	jg     0x100cd323
100cd270:	8d 86 28 0c 00 00    	lea    eax,[esi+0xc28]
100cd276:	8d 04 88             	lea    eax,[eax+ecx*4]
100cd279:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd27c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cd280:	8b b8 00 f4 ff ff    	mov    edi,DWORD PTR [eax-0xc00]
100cd286:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd288:	0f 8f 7f 00 00 00    	jg     0x100cd30d
100cd28e:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd291:	8b df                	mov    ebx,edi
100cd293:	c1 e3 04             	shl    ebx,0x4
100cd296:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cd299:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd29c:	8b 04 03             	mov    eax,DWORD PTR [ebx+eax*1]
100cd29f:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cd2a2:	6b c0 58             	imul   eax,eax,0x58
100cd2a5:	85 54 08 1c          	test   DWORD PTR [eax+ecx*1+0x1c],edx
100cd2a9:	74 4f                	je     0x100cd2fa
100cd2ab:	0f b6 54 08 19       	movzx  edx,BYTE PTR [eax+ecx*1+0x19]
100cd2b0:	3b 96 58 18 00 00    	cmp    edx,DWORD PTR [esi+0x1858]
100cd2b6:	7f 4f                	jg     0x100cd307
100cd2b8:	3b 96 4c 18 00 00    	cmp    edx,DWORD PTR [esi+0x184c]
100cd2be:	7c 37                	jl     0x100cd2f7
100cd2c0:	0f b6 44 08 1a       	movzx  eax,BYTE PTR [eax+ecx*1+0x1a]
100cd2c5:	3b 86 50 18 00 00    	cmp    eax,DWORD PTR [esi+0x1850]
100cd2cb:	7c 2a                	jl     0x100cd2f7
100cd2cd:	3b 86 5c 18 00 00    	cmp    eax,DWORD PTR [esi+0x185c]
100cd2d3:	7f 22                	jg     0x100cd2f7
100cd2d5:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cd2d8:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd2db:	83 ec 0c             	sub    esp,0xc
100cd2de:	8b cc                	mov    ecx,esp
100cd2e0:	8b 02                	mov    eax,DWORD PTR [edx]
100cd2e2:	89 01                	mov    DWORD PTR [ecx],eax
100cd2e4:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100cd2e7:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cd2ea:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100cd2ed:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cd2f0:	8b ce                	mov    ecx,esi
100cd2f2:	e8 59 ea ff ff       	call   0x100cbd50
100cd2f7:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd2fa:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd2fd:	47                   	inc    edi
100cd2fe:	83 c3 10             	add    ebx,0x10
100cd301:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd303:	7e 91                	jle    0x100cd296
100cd305:	eb 03                	jmp    0x100cd30a
100cd307:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd30a:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cd30d:	41                   	inc    ecx
100cd30e:	83 c0 04             	add    eax,0x4
100cd311:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd314:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd317:	3b 8e 3c 18 00 00    	cmp    ecx,DWORD PTR [esi+0x183c]
100cd31d:	0f 8e 5d ff ff ff    	jle    0x100cd280
100cd323:	8b 86 40 18 00 00    	mov    eax,DWORD PTR [esi+0x1840]
100cd329:	b9 7f 00 00 00       	mov    ecx,0x7f
100cd32e:	83 f8 7f             	cmp    eax,0x7f
100cd331:	0f 4c c8             	cmovl  ecx,eax
100cd334:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd337:	3b 8e 34 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1834]
100cd33d:	0f 8c b1 00 00 00    	jl     0x100cd3f4
100cd343:	8d 86 28 10 00 00    	lea    eax,[esi+0x1028]
100cd349:	8d 04 88             	lea    eax,[eax+ecx*4]
100cd34c:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd34f:	90                   	nop
100cd350:	8b b8 00 f4 ff ff    	mov    edi,DWORD PTR [eax-0xc00]
100cd356:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd358:	0f 8f 80 00 00 00    	jg     0x100cd3de
100cd35e:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd361:	8b df                	mov    ebx,edi
100cd363:	c1 e3 04             	shl    ebx,0x4
100cd366:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cd369:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd36c:	8b 44 18 04          	mov    eax,DWORD PTR [eax+ebx*1+0x4]
100cd370:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cd373:	6b c0 58             	imul   eax,eax,0x58
100cd376:	85 54 08 1c          	test   DWORD PTR [eax+ecx*1+0x1c],edx
100cd37a:	74 4f                	je     0x100cd3cb
100cd37c:	0f b6 54 08 1a       	movzx  edx,BYTE PTR [eax+ecx*1+0x1a]
100cd381:	3b 96 5c 18 00 00    	cmp    edx,DWORD PTR [esi+0x185c]
100cd387:	7f 4f                	jg     0x100cd3d8
100cd389:	3b 96 50 18 00 00    	cmp    edx,DWORD PTR [esi+0x1850]
100cd38f:	7c 37                	jl     0x100cd3c8
100cd391:	0f b6 44 08 18       	movzx  eax,BYTE PTR [eax+ecx*1+0x18]
100cd396:	3b 86 48 18 00 00    	cmp    eax,DWORD PTR [esi+0x1848]
100cd39c:	7c 2a                	jl     0x100cd3c8
100cd39e:	3b 86 54 18 00 00    	cmp    eax,DWORD PTR [esi+0x1854]
100cd3a4:	7f 22                	jg     0x100cd3c8
100cd3a6:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cd3a9:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd3ac:	83 ec 0c             	sub    esp,0xc
100cd3af:	8b cc                	mov    ecx,esp
100cd3b1:	8b 02                	mov    eax,DWORD PTR [edx]
100cd3b3:	89 01                	mov    DWORD PTR [ecx],eax
100cd3b5:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100cd3b8:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cd3bb:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100cd3be:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cd3c1:	8b ce                	mov    ecx,esi
100cd3c3:	e8 88 e9 ff ff       	call   0x100cbd50
100cd3c8:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd3cb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd3ce:	47                   	inc    edi
100cd3cf:	83 c3 10             	add    ebx,0x10
100cd3d2:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd3d4:	7e 90                	jle    0x100cd366
100cd3d6:	eb 03                	jmp    0x100cd3db
100cd3d8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd3db:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cd3de:	49                   	dec    ecx
100cd3df:	83 e8 04             	sub    eax,0x4
100cd3e2:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd3e5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd3e8:	3b 8e 34 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1834]
100cd3ee:	0f 8d 5c ff ff ff    	jge    0x100cd350
100cd3f4:	8b 86 38 18 00 00    	mov    eax,DWORD PTR [esi+0x1838]
100cd3fa:	b9 80 00 00 00       	mov    ecx,0x80
100cd3ff:	3d 80 00 00 00       	cmp    eax,0x80
100cd404:	0f 4f c8             	cmovg  ecx,eax
100cd407:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd40a:	3b 8e 44 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1844]
100cd410:	0f 8f b8 00 00 00    	jg     0x100cd4ce
100cd416:	8d 86 28 14 00 00    	lea    eax,[esi+0x1428]
100cd41c:	8d 04 88             	lea    eax,[eax+ecx*4]
100cd41f:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd422:	8b b8 00 f4 ff ff    	mov    edi,DWORD PTR [eax-0xc00]
100cd428:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd42a:	0f 8f 88 00 00 00    	jg     0x100cd4b8
100cd430:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd433:	8b df                	mov    ebx,edi
100cd435:	c1 e3 04             	shl    ebx,0x4
100cd438:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cd43f:	00 
100cd440:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cd443:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd446:	8b 44 18 08          	mov    eax,DWORD PTR [eax+ebx*1+0x8]
100cd44a:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100cd44d:	6b c0 58             	imul   eax,eax,0x58
100cd450:	85 54 08 1c          	test   DWORD PTR [eax+ecx*1+0x1c],edx
100cd454:	74 4f                	je     0x100cd4a5
100cd456:	0f b6 54 08 18       	movzx  edx,BYTE PTR [eax+ecx*1+0x18]
100cd45b:	3b 96 54 18 00 00    	cmp    edx,DWORD PTR [esi+0x1854]
100cd461:	7f 4f                	jg     0x100cd4b2
100cd463:	3b 96 48 18 00 00    	cmp    edx,DWORD PTR [esi+0x1848]
100cd469:	7c 37                	jl     0x100cd4a2
100cd46b:	0f b6 44 08 19       	movzx  eax,BYTE PTR [eax+ecx*1+0x19]
100cd470:	3b 86 4c 18 00 00    	cmp    eax,DWORD PTR [esi+0x184c]
100cd476:	7c 2a                	jl     0x100cd4a2
100cd478:	3b 86 58 18 00 00    	cmp    eax,DWORD PTR [esi+0x1858]
100cd47e:	7f 22                	jg     0x100cd4a2
100cd480:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cd483:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd486:	83 ec 0c             	sub    esp,0xc
100cd489:	8b cc                	mov    ecx,esp
100cd48b:	8b 02                	mov    eax,DWORD PTR [edx]
100cd48d:	89 01                	mov    DWORD PTR [ecx],eax
100cd48f:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100cd492:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cd495:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
100cd498:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100cd49b:	8b ce                	mov    ecx,esi
100cd49d:	e8 ae e8 ff ff       	call   0x100cbd50
100cd4a2:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cd4a5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd4a8:	47                   	inc    edi
100cd4a9:	83 c3 10             	add    ebx,0x10
100cd4ac:	3b 38                	cmp    edi,DWORD PTR [eax]
100cd4ae:	7e 90                	jle    0x100cd440
100cd4b0:	eb 03                	jmp    0x100cd4b5
100cd4b2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100cd4b5:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100cd4b8:	41                   	inc    ecx
100cd4b9:	83 c0 04             	add    eax,0x4
100cd4bc:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100cd4bf:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd4c2:	3b 8e 44 18 00 00    	cmp    ecx,DWORD PTR [esi+0x1844]
100cd4c8:	0f 8e 54 ff ff ff    	jle    0x100cd422
100cd4ce:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100cd4d1:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100cd4d4:	f3 0f 7e 07          	movq   xmm0,QWORD PTR [edi]
100cd4d8:	66 0f d6 84 31 7c 18 	movq   QWORD PTR [ecx+esi*1+0x187c],xmm0
100cd4df:	00 00 
100cd4e1:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
100cd4e4:	89 84 31 84 18 00 00 	mov    DWORD PTR [ecx+esi*1+0x1884],eax
100cd4eb:	66 8b 86 2c 18 00 00 	mov    ax,WORD PTR [esi+0x182c]
100cd4f2:	66 89 84 31 88 18 00 	mov    WORD PTR [ecx+esi*1+0x1888],ax
100cd4f9:	00 
100cd4fa:	8b 86 2c 18 00 00    	mov    eax,DWORD PTR [esi+0x182c]
100cd500:	5f                   	pop    edi
100cd501:	5e                   	pop    esi
100cd502:	5b                   	pop    ebx
100cd503:	8b e5                	mov    esp,ebp
100cd505:	5d                   	pop    ebp
100cd506:	c2 08 00             	ret    0x8
100cd509:	68 90 67 1d 10       	push   0x101d6790
100cd50e:	6a 02                	push   0x2
100cd510:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cd516:	83 c4 08             	add    esp,0x8
100cd519:	83 c8 ff             	or     eax,0xffffffff
100cd51c:	5f                   	pop    edi
100cd51d:	5e                   	pop    esi
100cd51e:	5b                   	pop    ebx
100cd51f:	8b e5                	mov    esp,ebp
100cd521:	5d                   	pop    ebp
100cd522:	c2 08 00             	ret    0x8
