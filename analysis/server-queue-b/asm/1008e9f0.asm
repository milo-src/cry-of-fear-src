
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008e9f0 <.text+0x8d9f0>:
1008e9f0:	56                   	push   esi
1008e9f1:	8b f1                	mov    esi,ecx
1008e9f3:	0f b6 86 80 01 00 00 	movzx  eax,BYTE PTR [esi+0x180]
1008e9fa:	83 f8 08             	cmp    eax,0x8
1008e9fd:	0f 87 c5 00 00 00    	ja     0x1008eac8
1008ea03:	ff 24 85 e4 ea 08 10 	jmp    DWORD PTR [eax*4+0x1008eae4]
1008ea0a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008ea0f:	ba 68 40 1a 10       	mov    edx,0x101a4068
1008ea14:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
1008ea1a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ea1d:	5e                   	pop    esi
1008ea1e:	89 90 f0 01 00 00    	mov    DWORD PTR [eax+0x1f0],edx
1008ea24:	c3                   	ret
1008ea25:	68 0c f4 1b 10       	push   0x101bf40c
1008ea2a:	e8 01 80 08 00       	call   0x10116a30
1008ea2f:	83 c4 04             	add    esp,0x4
1008ea32:	b9 0c f4 1b 10       	mov    ecx,0x101bf40c
1008ea37:	e9 91 00 00 00       	jmp    0x1008eacd
1008ea3c:	68 20 f4 1b 10       	push   0x101bf420
1008ea41:	e8 ea 7f 08 00       	call   0x10116a30
1008ea46:	83 c4 04             	add    esp,0x4
1008ea49:	b9 20 f4 1b 10       	mov    ecx,0x101bf420
1008ea4e:	eb 7d                	jmp    0x1008eacd
1008ea50:	68 34 f4 1b 10       	push   0x101bf434
1008ea55:	e8 d6 7f 08 00       	call   0x10116a30
1008ea5a:	83 c4 04             	add    esp,0x4
1008ea5d:	b9 34 f4 1b 10       	mov    ecx,0x101bf434
1008ea62:	eb 69                	jmp    0x1008eacd
1008ea64:	68 48 f4 1b 10       	push   0x101bf448
1008ea69:	e8 c2 7f 08 00       	call   0x10116a30
1008ea6e:	83 c4 04             	add    esp,0x4
1008ea71:	b9 48 f4 1b 10       	mov    ecx,0x101bf448
1008ea76:	eb 55                	jmp    0x1008eacd
1008ea78:	68 5c f4 1b 10       	push   0x101bf45c
1008ea7d:	e8 ae 7f 08 00       	call   0x10116a30
1008ea82:	83 c4 04             	add    esp,0x4
1008ea85:	b9 5c f4 1b 10       	mov    ecx,0x101bf45c
1008ea8a:	eb 41                	jmp    0x1008eacd
1008ea8c:	68 70 f4 1b 10       	push   0x101bf470
1008ea91:	e8 9a 7f 08 00       	call   0x10116a30
1008ea96:	83 c4 04             	add    esp,0x4
1008ea99:	b9 70 f4 1b 10       	mov    ecx,0x101bf470
1008ea9e:	eb 2d                	jmp    0x1008eacd
1008eaa0:	68 84 f4 1b 10       	push   0x101bf484
1008eaa5:	e8 86 7f 08 00       	call   0x10116a30
1008eaaa:	83 c4 04             	add    esp,0x4
1008eaad:	b9 84 f4 1b 10       	mov    ecx,0x101bf484
1008eab2:	eb 19                	jmp    0x1008eacd
1008eab4:	68 98 f4 1b 10       	push   0x101bf498
1008eab9:	e8 72 7f 08 00       	call   0x10116a30
1008eabe:	83 c4 04             	add    esp,0x4
1008eac1:	b9 98 f4 1b 10       	mov    ecx,0x101bf498
1008eac6:	eb 05                	jmp    0x1008eacd
1008eac8:	b9 68 40 1a 10       	mov    ecx,0x101a4068
1008eacd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008ead2:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008ead8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008eadb:	5e                   	pop    esi
1008eadc:	89 88 f0 01 00 00    	mov    DWORD PTR [eax+0x1f0],ecx
1008eae2:	c3                   	ret
