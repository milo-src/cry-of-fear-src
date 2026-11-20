
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008cf30 <.text+0x8bf30>:
1008cf30:	55                   	push   ebp
1008cf31:	8b ec                	mov    ebp,esp
1008cf33:	51                   	push   ecx
1008cf34:	53                   	push   ebx
1008cf35:	8b d9                	mov    ebx,ecx
1008cf37:	0f 57 c9             	xorps  xmm1,xmm1
1008cf3a:	56                   	push   esi
1008cf3b:	57                   	push   edi
1008cf3c:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
1008cf3f:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1008cf42:	f3 0f 10 82 e4 01 00 	movss  xmm0,DWORD PTR [edx+0x1e4]
1008cf49:	00 
1008cf4a:	0f 2e c1             	ucomiss xmm0,xmm1
1008cf4d:	9f                   	lahf
1008cf4e:	f6 c4 44             	test   ah,0x44
1008cf51:	7b 15                	jnp    0x1008cf68
1008cf53:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1008cf56:	6a 01                	push   0x1
1008cf58:	51                   	push   ecx
1008cf59:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008cf5e:	8b 01                	mov    eax,DWORD PTR [ecx]
1008cf60:	52                   	push   edx
1008cf61:	52                   	push   edx
1008cf62:	ff 50 64             	call   DWORD PTR [eax+0x64]
1008cf65:	0f 57 c9             	xorps  xmm1,xmm1
1008cf68:	f3 0f 10 83 0c 01 00 	movss  xmm0,DWORD PTR [ebx+0x10c]
1008cf6f:	00 
1008cf70:	0f 2f c1             	comiss xmm0,xmm1
1008cf73:	72 5b                	jb     0x1008cfd0
1008cf75:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1008cf78:	83 ba a4 01 00 00 00 	cmp    DWORD PTR [edx+0x1a4],0x0
1008cf7f:	7c 38                	jl     0x1008cfb9
1008cf81:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008cf86:	8b 8a f0 01 00 00    	mov    ecx,DWORD PTR [edx+0x1f0]
1008cf8c:	6a 64                	push   0x64
1008cf8e:	6a 20                	push   0x20
1008cf90:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008cf96:	83 ec 08             	sub    esp,0x8
1008cf99:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
1008cfa0:	00 
1008cfa1:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008cfa8:	51                   	push   ecx
1008cfa9:	6a 06                	push   0x6
1008cfab:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008cfb1:	e8 3a fa 06 00       	call   0x100fc9f0
1008cfb6:	83 c4 1c             	add    esp,0x1c
1008cfb9:	83 bb 00 01 00 00 03 	cmp    DWORD PTR [ebx+0x100],0x3
1008cfc0:	8b cb                	mov    ecx,ebx
1008cfc2:	75 07                	jne    0x1008cfcb
1008cfc4:	e8 b7 04 00 00       	call   0x1008d480
1008cfc9:	eb 05                	jmp    0x1008cfd0
1008cfcb:	e8 50 03 00 00       	call   0x1008d320
1008cfd0:	83 bb b0 01 00 00 00 	cmp    DWORD PTR [ebx+0x1b0],0x0
1008cfd7:	0f 85 65 02 00 00    	jne    0x1008d242
1008cfdd:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1008cfe0:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
1008cfe6:	85 c9                	test   ecx,ecx
1008cfe8:	0f 84 54 02 00 00    	je     0x1008d242
1008cfee:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008cff3:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008cff9:	03 c1                	add    eax,ecx
1008cffb:	50                   	push   eax
1008cffc:	6a 00                	push   0x0
1008cffe:	e8 8d b5 08 00       	call   0x10118590
1008d003:	83 c4 08             	add    esp,0x8
1008d006:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008d009:	85 c0                	test   eax,eax
1008d00b:	0f 84 31 02 00 00    	je     0x1008d242
1008d011:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
1008d014:	3b 73 04             	cmp    esi,DWORD PTR [ebx+0x4]
1008d017:	74 40                	je     0x1008d059
1008d019:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d01e:	b9 8c f5 1b 10       	mov    ecx,0x101bf58c
1008d023:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d029:	03 06                	add    eax,DWORD PTR [esi]
1008d02b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1008d030:	8a 10                	mov    dl,BYTE PTR [eax]
1008d032:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008d034:	75 1a                	jne    0x1008d050
1008d036:	84 d2                	test   dl,dl
1008d038:	74 12                	je     0x1008d04c
1008d03a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008d03d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008d040:	75 0e                	jne    0x1008d050
1008d042:	83 c0 02             	add    eax,0x2
1008d045:	83 c1 02             	add    ecx,0x2
1008d048:	84 d2                	test   dl,dl
1008d04a:	75 e4                	jne    0x1008d030
1008d04c:	33 c0                	xor    eax,eax
1008d04e:	eb 05                	jmp    0x1008d055
1008d050:	1b c0                	sbb    eax,eax
1008d052:	83 c8 01             	or     eax,0x1
1008d055:	85 c0                	test   eax,eax
1008d057:	74 44                	je     0x1008d09d
1008d059:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d05e:	b9 78 f5 1b 10       	mov    ecx,0x101bf578
1008d063:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d069:	03 06                	add    eax,DWORD PTR [esi]
1008d06b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1008d070:	8a 10                	mov    dl,BYTE PTR [eax]
1008d072:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008d074:	75 1a                	jne    0x1008d090
1008d076:	84 d2                	test   dl,dl
1008d078:	74 12                	je     0x1008d08c
1008d07a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008d07d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008d080:	75 0e                	jne    0x1008d090
1008d082:	83 c0 02             	add    eax,0x2
1008d085:	83 c1 02             	add    ecx,0x2
1008d088:	84 d2                	test   dl,dl
1008d08a:	75 e4                	jne    0x1008d070
1008d08c:	33 c0                	xor    eax,eax
1008d08e:	eb 05                	jmp    0x1008d095
1008d090:	1b c0                	sbb    eax,eax
1008d092:	83 c8 01             	or     eax,0x1
1008d095:	85 c0                	test   eax,eax
1008d097:	0f 85 7a 01 00 00    	jne    0x1008d217
1008d09d:	56                   	push   esi
1008d09e:	e8 6d fd ff ff       	call   0x1008ce10
1008d0a3:	8b f0                	mov    esi,eax
1008d0a5:	0f 57 c9             	xorps  xmm1,xmm1
1008d0a8:	83 c4 04             	add    esp,0x4
1008d0ab:	f3 0f 10 86 0c 01 00 	movss  xmm0,DWORD PTR [esi+0x10c]
1008d0b2:	00 
1008d0b3:	0f 2f c1             	comiss xmm0,xmm1
1008d0b6:	0f 82 5b 01 00 00    	jb     0x1008d217
1008d0bc:	8b 5b 04             	mov    ebx,DWORD PTR [ebx+0x4]
1008d0bf:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1008d0c2:	f3 0f 10 4b 20       	movss  xmm1,DWORD PTR [ebx+0x20]
1008d0c7:	f3 0f 10 47 20       	movss  xmm0,DWORD PTR [edi+0x20]
1008d0cc:	0f 2e c1             	ucomiss xmm0,xmm1
1008d0cf:	9f                   	lahf
1008d0d0:	f6 c4 44             	test   ah,0x44
1008d0d3:	0f 8a 24 01 00 00    	jp     0x1008d1fd
1008d0d9:	f3 0f 10 47 24       	movss  xmm0,DWORD PTR [edi+0x24]
1008d0de:	0f 2e 43 24          	ucomiss xmm0,DWORD PTR [ebx+0x24]
1008d0e2:	9f                   	lahf
1008d0e3:	f6 c4 44             	test   ah,0x44
1008d0e6:	0f 8a 11 01 00 00    	jp     0x1008d1fd
1008d0ec:	f3 0f 10 47 28       	movss  xmm0,DWORD PTR [edi+0x28]
1008d0f1:	0f 2e 43 28          	ucomiss xmm0,DWORD PTR [ebx+0x28]
1008d0f5:	9f                   	lahf
1008d0f6:	f6 c4 44             	test   ah,0x44
1008d0f9:	0f 8a fe 00 00 00    	jp     0x1008d1fd
1008d0ff:	f3 0f 10 47 5c       	movss  xmm0,DWORD PTR [edi+0x5c]
1008d104:	0f 2e c1             	ucomiss xmm0,xmm1
1008d107:	9f                   	lahf
1008d108:	f6 c4 44             	test   ah,0x44
1008d10b:	0f 8a ec 00 00 00    	jp     0x1008d1fd
1008d111:	f3 0f 10 47 60       	movss  xmm0,DWORD PTR [edi+0x60]
1008d116:	0f 2e 43 24          	ucomiss xmm0,DWORD PTR [ebx+0x24]
1008d11a:	9f                   	lahf
1008d11b:	f6 c4 44             	test   ah,0x44
1008d11e:	0f 8a d9 00 00 00    	jp     0x1008d1fd
1008d124:	f3 0f 10 47 64       	movss  xmm0,DWORD PTR [edi+0x64]
1008d129:	0f 2e 43 28          	ucomiss xmm0,DWORD PTR [ebx+0x28]
1008d12d:	9f                   	lahf
1008d12e:	f6 c4 44             	test   ah,0x44
1008d131:	0f 8a c6 00 00 00    	jp     0x1008d1fd
1008d137:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1008d13a:	ba 8c f5 1b 10       	mov    edx,0x101bf58c
1008d13f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d144:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1008d147:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d14d:	03 01                	add    eax,DWORD PTR [ecx]
1008d14f:	90                   	nop
1008d150:	8a 08                	mov    cl,BYTE PTR [eax]
1008d152:	3a 0a                	cmp    cl,BYTE PTR [edx]
1008d154:	75 1a                	jne    0x1008d170
1008d156:	84 c9                	test   cl,cl
1008d158:	74 12                	je     0x1008d16c
1008d15a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1008d15d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1008d160:	75 0e                	jne    0x1008d170
1008d162:	83 c0 02             	add    eax,0x2
1008d165:	83 c2 02             	add    edx,0x2
1008d168:	84 c9                	test   cl,cl
1008d16a:	75 e4                	jne    0x1008d150
1008d16c:	33 c0                	xor    eax,eax
1008d16e:	eb 05                	jmp    0x1008d175
1008d170:	1b c0                	sbb    eax,eax
1008d172:	83 c8 01             	or     eax,0x1
1008d175:	83 ec 0c             	sub    esp,0xc
1008d178:	85 c0                	test   eax,eax
1008d17a:	75 40                	jne    0x1008d1bc
1008d17c:	f3 0f 7e 43 08       	movq   xmm0,QWORD PTR [ebx+0x8]
1008d181:	66 0f d6 47 08       	movq   QWORD PTR [edi+0x8],xmm0
1008d186:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
1008d189:	89 47 10             	mov    DWORD PTR [edi+0x10],eax
1008d18c:	8b c4                	mov    eax,esp
1008d18e:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
1008d195:	10 
1008d196:	56                   	push   esi
1008d197:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008d19b:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
1008d1a2:	10 
1008d1a3:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008d1a8:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
1008d1af:	10 
1008d1b0:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008d1b5:	e8 16 7d 03 00       	call   0x100c4ed0
1008d1ba:	eb 3e                	jmp    0x1008d1fa
1008d1bc:	f3 0f 7e 43 50       	movq   xmm0,QWORD PTR [ebx+0x50]
1008d1c1:	66 0f d6 47 50       	movq   QWORD PTR [edi+0x50],xmm0
1008d1c6:	8b 43 58             	mov    eax,DWORD PTR [ebx+0x58]
1008d1c9:	89 47 58             	mov    DWORD PTR [edi+0x58],eax
1008d1cc:	8b c4                	mov    eax,esp
1008d1ce:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
1008d1d5:	10 
1008d1d6:	56                   	push   esi
1008d1d7:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008d1db:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
1008d1e2:	10 
1008d1e3:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008d1e8:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
1008d1ef:	10 
1008d1f0:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008d1f5:	e8 96 79 03 00       	call   0x100c4b90
1008d1fa:	83 c4 10             	add    esp,0x10
1008d1fd:	83 be 00 01 00 00 03 	cmp    DWORD PTR [esi+0x100],0x3
1008d204:	8b ce                	mov    ecx,esi
1008d206:	75 07                	jne    0x1008d20f
1008d208:	e8 73 02 00 00       	call   0x1008d480
1008d20d:	eb 05                	jmp    0x1008d214
1008d20f:	e8 0c 01 00 00       	call   0x1008d320
1008d214:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
1008d217:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d21c:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1008d21f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d225:	03 81 d0 01 00 00    	add    eax,DWORD PTR [ecx+0x1d0]
1008d22b:	50                   	push   eax
1008d22c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008d22f:	e8 5c b3 08 00       	call   0x10118590
1008d234:	83 c4 08             	add    esp,0x8
1008d237:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008d23a:	85 c0                	test   eax,eax
1008d23c:	0f 85 cf fd ff ff    	jne    0x1008d011
1008d242:	5f                   	pop    edi
1008d243:	5e                   	pop    esi
1008d244:	5b                   	pop    ebx
1008d245:	8b e5                	mov    esp,ebp
1008d247:	5d                   	pop    ebp
1008d248:	c2 04 00             	ret    0x4
