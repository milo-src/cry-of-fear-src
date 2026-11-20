
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d1ce0 <.text+0xd0ce0>:
100d1ce0:	55                   	push   ebp
100d1ce1:	8b ec                	mov    ebp,esp
100d1ce3:	83 ec 10             	sub    esp,0x10
100d1ce6:	56                   	push   esi
100d1ce7:	8b f1                	mov    esi,ecx
100d1ce9:	83 be f8 01 00 00 00 	cmp    DWORD PTR [esi+0x1f8],0x0
100d1cf0:	75 20                	jne    0x100d1d12
100d1cf2:	e8 19 ff ff ff       	call   0x100d1c10
100d1cf7:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1cfd:	51                   	push   ecx
100d1cfe:	8b ce                	mov    ecx,esi
100d1d00:	f3 0f 10 80 a0 00 00 	movss  xmm0,DWORD PTR [eax+0xa0]
100d1d07:	00 
100d1d08:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d1d0d:	e8 1e eb ff ff       	call   0x100d0830
100d1d12:	51                   	push   ecx
100d1d13:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d1d19:	8d 45 f0             	lea    eax,[ebp-0x10]
100d1d1c:	c7 04 24 b6 7e b2 3d 	mov    DWORD PTR [esp],0x3db27eb6
100d1d23:	50                   	push   eax
100d1d24:	e8 77 e1 00 00       	call   0x100dfea0
100d1d29:	e8 f2 8d 04 00       	call   0x1011ab20
100d1d2e:	f3 0f 10 86 d8 01 00 	movss  xmm0,DWORD PTR [esi+0x1d8]
100d1d35:	00 
100d1d36:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100d1d39:	0f 2f 45 fc          	comiss xmm0,DWORD PTR [ebp-0x4]
100d1d3d:	0f 87 c7 00 00 00    	ja     0x100d1e0a
100d1d43:	8b 86 08 02 00 00    	mov    eax,DWORD PTR [esi+0x208]
100d1d49:	83 e8 00             	sub    eax,0x0
100d1d4c:	74 69                	je     0x100d1db7
100d1d4e:	83 e8 01             	sub    eax,0x1
100d1d51:	0f 85 b3 00 00 00    	jne    0x100d1e0a
100d1d57:	8b 06                	mov    eax,DWORD PTR [esi]
100d1d59:	8b ce                	mov    ecx,esi
100d1d5b:	ff 90 ec 01 00 00    	call   DWORD PTR [eax+0x1ec]
100d1d61:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1d67:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d1d6d:	f3 0f 10 80 94 00 00 	movss  xmm0,DWORD PTR [eax+0x94]
100d1d74:	00 
100d1d75:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100d1d7c:	9f                   	lahf
100d1d7d:	f6 c4 44             	test   ah,0x44
100d1d80:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100d1d83:	7a 08                	jp     0x100d1d8d
100d1d85:	f3 0f 10 05 b4 68 22 	movss  xmm0,DWORD PTR ds:0x102268b4
100d1d8c:	10 
100d1d8d:	f3 0f 11 80 14 02 00 	movss  DWORD PTR [eax+0x214],xmm0
100d1d94:	00 
100d1d95:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1d9b:	8b 80 9c 00 00 00    	mov    eax,DWORD PTR [eax+0x9c]
100d1da1:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d1da7:	83 f8 ff             	cmp    eax,0xffffffff
100d1daa:	74 57                	je     0x100d1e03
100d1dac:	50                   	push   eax
100d1dad:	e8 2e 1c 02 00       	call   0x100f39e0
100d1db2:	5e                   	pop    esi
100d1db3:	8b e5                	mov    esp,ebp
100d1db5:	5d                   	pop    ebp
100d1db6:	c3                   	ret
100d1db7:	8b 06                	mov    eax,DWORD PTR [esi]
100d1db9:	8b ce                	mov    ecx,esi
100d1dbb:	ff 90 e8 01 00 00    	call   DWORD PTR [eax+0x1e8]
100d1dc1:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1dc7:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d1dcd:	f3 0f 10 80 90 00 00 	movss  xmm0,DWORD PTR [eax+0x90]
100d1dd4:	00 
100d1dd5:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100d1ddc:	9f                   	lahf
100d1ddd:	f6 c4 44             	test   ah,0x44
100d1de0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100d1de3:	7a 08                	jp     0x100d1ded
100d1de5:	f3 0f 10 05 b0 68 22 	movss  xmm0,DWORD PTR ds:0x102268b0
100d1dec:	10 
100d1ded:	f3 0f 11 80 14 02 00 	movss  DWORD PTR [eax+0x214],xmm0
100d1df4:	00 
100d1df5:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1dfb:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100d1e01:	eb 9e                	jmp    0x100d1da1
100d1e03:	6a 64                	push   0x64
100d1e05:	e8 d6 1b 02 00       	call   0x100f39e0
100d1e0a:	5e                   	pop    esi
100d1e0b:	8b e5                	mov    esp,ebp
100d1e0d:	5d                   	pop    ebp
100d1e0e:	c3                   	ret
