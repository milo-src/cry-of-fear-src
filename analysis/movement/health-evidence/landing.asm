
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100eed77 <.text+0xedd77>:
100eed77:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100eed7a:	0f 57 c9             	xorps  xmm1,xmm1
100eed7d:	f3 0f 10 15 34 1f 1a 	movss  xmm2,DWORD PTR ds:0x101a1f34
100eed84:	10 
100eed85:	8b c8                	mov    ecx,eax
100eed87:	8b 90 a8 01 00 00    	mov    edx,DWORD PTR [eax+0x1a8]
100eed8d:	f7 c2 00 02 00 00    	test   edx,0x200
100eed93:	0f 84 73 00 00 00    	je     0x100eee0c
100eed99:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
100eeda0:	00 
100eeda1:	0f 2f c1             	comiss xmm0,xmm1
100eeda4:	0f 86 62 00 00 00    	jbe    0x100eee0c
100eedaa:	f3 0f 10 87 c4 22 00 	movss  xmm0,DWORD PTR [edi+0x22c4]
100eedb1:	00 
100eedb2:	0f 2f 05 ec da 1d 10 	comiss xmm0,DWORD PTR ds:0x101ddaec
100eedb9:	76 51                	jbe    0x100eee0c
100eedbb:	0f 2f d0             	comiss xmm2,xmm0
100eedbe:	76 4c                	jbe    0x100eee0c
100eedc0:	81 ca 00 02 00 00    	or     edx,0x200
100eedc6:	89 90 a8 01 00 00    	mov    DWORD PTR [eax+0x1a8],edx
100eedcc:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100eedcf:	83 b9 c8 01 00 00 fd 	cmp    DWORD PTR [ecx+0x1c8],0xfffffffd
100eedd6:	75 34                	jne    0x100eee0c
100eedd8:	8b 81 a0 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a0]
100eedde:	85 c0                	test   eax,eax
100eede0:	74 11                	je     0x100eedf3
100eede2:	f3 0f 10 80 a8 00 00 	movss  xmm0,DWORD PTR [eax+0xa8]
100eede9:	00 
100eedea:	0f 2e c1             	ucomiss xmm0,xmm1
100eeded:	9f                   	lahf
100eedee:	f6 c4 44             	test   ah,0x44
100eedf1:	7a 19                	jp     0x100eee0c
100eedf3:	6a 01                	push   0x1
100eedf5:	57                   	push   edi
100eedf6:	e8 f5 b4 02 00       	call   0x1011a2f0
100eedfb:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100eedfe:	83 c4 08             	add    esp,0x8
100eee01:	f3 0f 10 15 34 1f 1a 	movss  xmm2,DWORD PTR ds:0x101a1f34
100eee08:	10 
100eee09:	0f 57 c9             	xorps  xmm1,xmm1
100eee0c:	f7 81 a8 01 00 00 00 	test   DWORD PTR [ecx+0x1a8],0x200
100eee13:	02 00 00 
100eee16:	0f 84 1a 01 00 00    	je     0x100eef36
100eee1c:	f3 0f 10 81 64 01 00 	movss  xmm0,DWORD PTR [ecx+0x164]
100eee23:	00 
100eee24:	0f 2f c1             	comiss xmm0,xmm1
100eee27:	0f 86 09 01 00 00    	jbe    0x100eef36
100eee2d:	f3 0f 10 87 c4 22 00 	movss  xmm0,DWORD PTR [edi+0x22c4]
100eee34:	00 
100eee35:	0f 2f c2             	comiss xmm0,xmm2
100eee38:	0f 82 f8 00 00 00    	jb     0x100eef36
100eee3e:	83 b9 c8 01 00 00 fd 	cmp    DWORD PTR [ecx+0x1c8],0xfffffffd
100eee45:	75 2f                	jne    0x100eee76
100eee47:	8b 81 a0 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a0]
100eee4d:	85 c0                	test   eax,eax
100eee4f:	74 15                	je     0x100eee66
100eee51:	f3 0f 10 80 a8 00 00 	movss  xmm0,DWORD PTR [eax+0xa8]
100eee58:	00 
100eee59:	0f 2e c1             	ucomiss xmm0,xmm1
100eee5c:	9f                   	lahf
100eee5d:	f6 c4 44             	test   ah,0x44
100eee60:	0f 8a b7 00 00 00    	jp     0x100eef1d
100eee66:	6a 01                	push   0x1
100eee68:	57                   	push   edi
100eee69:	e8 82 b4 02 00       	call   0x1011a2f0
100eee6e:	83 c4 08             	add    esp,0x8
100eee71:	e9 a7 00 00 00       	jmp    0x100eef1d
100eee76:	0f 2f 05 38 1f 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1f38
100eee7d:	0f 86 9a 00 00 00    	jbe    0x100eef1d
100eee83:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100eee89:	57                   	push   edi
100eee8a:	8b 01                	mov    eax,DWORD PTR [ecx]
100eee8c:	8b 40 44             	mov    eax,DWORD PTR [eax+0x44]
100eee8f:	ff d0                	call   eax
100eee91:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100eee94:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
100eee98:	f3 0f 10 44 24 08    	movss  xmm0,DWORD PTR [esp+0x8]
100eee9e:	0f 2f 80 64 01 00 00 	comiss xmm0,DWORD PTR [eax+0x164]
100eeea5:	76 31                	jbe    0x100eeed8
100eeea7:	6a 64                	push   0x64
100eeea9:	6a 00                	push   0x0
100eeeab:	83 ec 08             	sub    esp,0x8
100eeeae:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100eeeb5:	3f 
100eeeb6:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100eeebd:	68 dc 90 1a 10       	push   0x101a90dc
100eeec2:	6a 03                	push   0x3
100eeec4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100eeeca:	e8 21 db 00 00       	call   0x100fc9f0
100eeecf:	f3 0f 10 44 24 24    	movss  xmm0,DWORD PTR [esp+0x24]
100eeed5:	83 c4 1c             	add    esp,0x1c
100eeed8:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
100eeedf:	76 3c                	jbe    0x100eef1d
100eeee1:	8b cf                	mov    ecx,edi
100eeee3:	e8 b8 7b 00 00       	call   0x100f6aa0
100eeee8:	f3 0f 10 44 24 08    	movss  xmm0,DWORD PTR [esp+0x8]
100eeeee:	8b 37                	mov    esi,DWORD PTR [edi]
100eeef0:	6a 20                	push   0x20
100eeef2:	51                   	push   ecx
100eeef3:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100eeef8:	6a 00                	push   0x0
100eeefa:	e8 11 a1 00 00       	call   0x100f9010
100eeeff:	83 c4 04             	add    esp,0x4
100eef02:	50                   	push   eax
100eef03:	6a 00                	push   0x0
100eef05:	e8 06 a1 00 00       	call   0x100f9010
100eef0a:	83 c4 04             	add    esp,0x4
100eef0d:	8b cf                	mov    ecx,edi
100eef0f:	50                   	push   eax
100eef10:	ff 56 64             	call   DWORD PTR [esi+0x64]
100eef13:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100eef16:	c7 40 68 00 00 00 00 	mov    DWORD PTR [eax+0x68],0x0
