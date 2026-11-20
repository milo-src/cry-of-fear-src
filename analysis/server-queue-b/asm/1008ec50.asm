
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ec50 <.text+0x8dc50>:
1008ec50:	55                   	push   ebp
1008ec51:	8b ec                	mov    ebp,esp
1008ec53:	8b d1                	mov    edx,ecx
1008ec55:	83 ec 0c             	sub    esp,0xc
1008ec58:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1008ec5c:	8b cc                	mov    ecx,esp
1008ec5e:	8b 42 14             	mov    eax,DWORD PTR [edx+0x14]
1008ec61:	52                   	push   edx
1008ec62:	75 6e                	jne    0x1008ecd2
1008ec64:	85 c0                	test   eax,eax
1008ec66:	74 44                	je     0x1008ecac
1008ec68:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1008ec6b:	f3 0f 10 82 28 01 00 	movss  xmm0,DWORD PTR [edx+0x128]
1008ec72:	00 
1008ec73:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1008ec78:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
1008ec7d:	f3 0f 58 92 2c 01 00 	addss  xmm2,DWORD PTR [edx+0x12c]
1008ec84:	00 
1008ec85:	f3 0f 58 8a 30 01 00 	addss  xmm1,DWORD PTR [edx+0x130]
1008ec8c:	00 
1008ec8d:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
1008ec92:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
1008ec96:	f3 0f 11 51 04       	movss  DWORD PTR [ecx+0x4],xmm2
1008ec9b:	f3 0f 11 49 08       	movss  DWORD PTR [ecx+0x8],xmm1
1008eca0:	e8 ab 58 03 00       	call   0x100c4550
1008eca5:	83 c4 10             	add    esp,0x10
1008eca8:	5d                   	pop    ebp
1008eca9:	c2 04 00             	ret    0x4
1008ecac:	8b 82 28 01 00 00    	mov    eax,DWORD PTR [edx+0x128]
1008ecb2:	89 01                	mov    DWORD PTR [ecx],eax
1008ecb4:	8b 82 2c 01 00 00    	mov    eax,DWORD PTR [edx+0x12c]
1008ecba:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008ecbd:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
1008ecc3:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008ecc6:	e8 85 58 03 00       	call   0x100c4550
1008eccb:	83 c4 10             	add    esp,0x10
1008ecce:	5d                   	pop    ebp
1008eccf:	c2 04 00             	ret    0x4
1008ecd2:	85 c0                	test   eax,eax
1008ecd4:	74 27                	je     0x1008ecfd
1008ecd6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1008ecd9:	f3 0f 10 82 1c 01 00 	movss  xmm0,DWORD PTR [edx+0x11c]
1008ece0:	00 
1008ece1:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1008ece6:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
1008eceb:	f3 0f 58 92 20 01 00 	addss  xmm2,DWORD PTR [edx+0x120]
1008ecf2:	00 
1008ecf3:	f3 0f 58 8a 24 01 00 	addss  xmm1,DWORD PTR [edx+0x124]
1008ecfa:	00 
1008ecfb:	eb 90                	jmp    0x1008ec8d
1008ecfd:	8b 82 1c 01 00 00    	mov    eax,DWORD PTR [edx+0x11c]
1008ed03:	89 01                	mov    DWORD PTR [ecx],eax
1008ed05:	8b 82 20 01 00 00    	mov    eax,DWORD PTR [edx+0x120]
1008ed0b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008ed0e:	8b 82 24 01 00 00    	mov    eax,DWORD PTR [edx+0x124]
1008ed14:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008ed17:	e8 34 58 03 00       	call   0x100c4550
1008ed1c:	83 c4 10             	add    esp,0x10
1008ed1f:	5d                   	pop    ebp
1008ed20:	c2 04 00             	ret    0x4
