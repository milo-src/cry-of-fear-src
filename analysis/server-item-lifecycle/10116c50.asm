
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116c50 <.text+0x115c50>:
10116c50:	55                   	push   ebp
10116c51:	8b ec                	mov    ebp,esp
10116c53:	83 ec 24             	sub    esp,0x24
10116c56:	8b c1                	mov    eax,ecx
10116c58:	0f 57 c0             	xorps  xmm0,xmm0
10116c5b:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10116c5e:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10116c63:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10116c68:	8b 00                	mov    eax,DWORD PTR [eax]
10116c6a:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10116c6f:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10116c74:	85 c0                	test   eax,eax
10116c76:	74 4a                	je     0x10116cc2
10116c78:	83 b8 2c 05 00 00 00 	cmp    DWORD PTR [eax+0x52c],0x0
10116c7f:	f3 0f 10 80 50 05 00 	movss  xmm0,DWORD PTR [eax+0x550]
10116c86:	00 
10116c87:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10116c8c:	74 34                	je     0x10116cc2
10116c8e:	f3 0f 7e 80 44 05 00 	movq   xmm0,QWORD PTR [eax+0x544]
10116c95:	00 
10116c96:	8b 80 4c 05 00 00    	mov    eax,DWORD PTR [eax+0x54c]
10116c9c:	66 0f d6 45 dc       	movq   QWORD PTR [ebp-0x24],xmm0
10116ca1:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
10116ca4:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10116ca9:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10116cae:	f3 0f 10 45 e0       	movss  xmm0,DWORD PTR [ebp-0x20]
10116cb3:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10116cb8:	f3 0f 10 45 dc       	movss  xmm0,DWORD PTR [ebp-0x24]
10116cbd:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10116cc2:	53                   	push   ebx
10116cc3:	56                   	push   esi
10116cc4:	57                   	push   edi
10116cc5:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
10116cc8:	33 f6                	xor    esi,esi
10116cca:	85 ff                	test   edi,edi
10116ccc:	7e 2e                	jle    0x10116cfc
10116cce:	8b 5d 1c             	mov    ebx,DWORD PTR [ebp+0x1c]
10116cd1:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10116cd4:	03 c6                	add    eax,esi
10116cd6:	99                   	cdq
10116cd7:	f7 ff                	idiv   edi
10116cd9:	53                   	push   ebx
10116cda:	8b c2                	mov    eax,edx
10116cdc:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
10116cdf:	c1 e0 04             	shl    eax,0x4
10116ce2:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
10116ce5:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
10116ce8:	ff 70 04             	push   DWORD PTR [eax+0x4]
10116ceb:	e8 cb 4f 06 00       	call   0x1017bcbb
10116cf0:	83 c4 08             	add    esp,0x8
10116cf3:	85 c0                	test   eax,eax
10116cf5:	74 11                	je     0x10116d08
10116cf7:	46                   	inc    esi
10116cf8:	3b f7                	cmp    esi,edi
10116cfa:	7c d5                	jl     0x10116cd1
10116cfc:	5f                   	pop    edi
10116cfd:	5e                   	pop    esi
10116cfe:	83 c8 ff             	or     eax,0xffffffff
10116d01:	5b                   	pop    ebx
10116d02:	8b e5                	mov    esp,ebp
10116d04:	5d                   	pop    ebp
10116d05:	c2 1c 00             	ret    0x1c
10116d08:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10116d0b:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
10116d0e:	83 78 04 00          	cmp    DWORD PTR [eax+0x4],0x0
10116d12:	74 0a                	je     0x10116d1e
10116d14:	f6 43 0e 01          	test   BYTE PTR [ebx+0xe],0x1
10116d18:	0f 85 94 02 00 00    	jne    0x10116fb2
10116d1e:	33 c9                	xor    ecx,ecx
10116d20:	33 c0                	xor    eax,eax
10116d22:	89 4d 1c             	mov    DWORD PTR [ebp+0x1c],ecx
10116d25:	66 3b 43 0c          	cmp    ax,WORD PTR [ebx+0xc]
10116d29:	0f 8d 83 02 00 00    	jge    0x10116fb2
10116d2f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10116d32:	8b 33                	mov    esi,DWORD PTR [ebx]
10116d34:	8b 3c b5 40 b1 21 10 	mov    edi,DWORD PTR [esi*4+0x1021b140]
10116d3b:	8b d7                	mov    edx,edi
10116d3d:	0f af d1             	imul   edx,ecx
10116d40:	8d 0c 02             	lea    ecx,[edx+eax*1]
10116d43:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
10116d46:	03 4b 08             	add    ecx,DWORD PTR [ebx+0x8]
10116d49:	03 d0                	add    edx,eax
10116d4b:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
10116d4e:	83 fe 11             	cmp    esi,0x11
10116d51:	0f 87 35 02 00 00    	ja     0x10116f8c
10116d57:	ff 24 b5 c0 6f 11 10 	jmp    DWORD PTR [esi*4+0x10116fc0]
10116d5e:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
10116d62:	f3 0f 58 45 f8       	addss  xmm0,DWORD PTR [ebp-0x8]
10116d67:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
10116d6b:	e9 2c 02 00 00       	jmp    0x10116f9c
10116d70:	8b 02                	mov    eax,DWORD PTR [edx]
10116d72:	89 01                	mov    DWORD PTR [ecx],eax
10116d74:	e9 23 02 00 00       	jmp    0x10116f9c
10116d79:	8b 75 1c             	mov    esi,DWORD PTR [ebp+0x1c]
10116d7c:	8b c8                	mov    ecx,eax
10116d7e:	85 f6                	test   esi,esi
10116d80:	7e 1a                	jle    0x10116d9c
10116d82:	8b c6                	mov    eax,esi
10116d84:	80 39 00             	cmp    BYTE PTR [ecx],0x0
10116d87:	74 0d                	je     0x10116d96
10116d89:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10116d90:	41                   	inc    ecx
10116d91:	80 39 00             	cmp    BYTE PTR [ecx],0x0
10116d94:	75 fa                	jne    0x10116d90
10116d96:	41                   	inc    ecx
10116d97:	83 e8 01             	sub    eax,0x1
10116d9a:	75 e8                	jne    0x10116d84
10116d9c:	8b d1                	mov    edx,ecx
10116d9e:	8d 72 01             	lea    esi,[edx+0x1]
10116da1:	8a 02                	mov    al,BYTE PTR [edx]
10116da3:	42                   	inc    edx
10116da4:	84 c0                	test   al,al
10116da6:	75 f9                	jne    0x10116da1
10116da8:	2b d6                	sub    edx,esi
10116daa:	75 0e                	jne    0x10116dba
10116dac:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116daf:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
10116db5:	e9 e2 01 00 00       	jmp    0x10116f9c
10116dba:	51                   	push   ecx
10116dbb:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10116dc1:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116dc4:	8b c8                	mov    ecx,eax
10116dc6:	83 c4 04             	add    esp,0x4
10116dc9:	89 0a                	mov    DWORD PTR [edx],ecx
10116dcb:	85 c9                	test   ecx,ecx
10116dcd:	0f 84 c9 01 00 00    	je     0x10116f9c
10116dd3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10116dd6:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
10116dda:	0f 84 bc 01 00 00    	je     0x10116f9c
10116de0:	8b 03                	mov    eax,DWORD PTR [ebx]
10116de2:	83 f8 10             	cmp    eax,0x10
10116de5:	75 1b                	jne    0x10116e02
10116de7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10116dec:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10116df2:	03 c1                	add    eax,ecx
10116df4:	50                   	push   eax
10116df5:	e8 96 fb ff ff       	call   0x10116990
10116dfa:	83 c4 04             	add    esp,0x4
10116dfd:	e9 9a 01 00 00       	jmp    0x10116f9c
10116e02:	83 f8 11             	cmp    eax,0x11
10116e05:	0f 85 91 01 00 00    	jne    0x10116f9c
10116e0b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10116e10:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10116e16:	03 c1                	add    eax,ecx
10116e18:	50                   	push   eax
10116e19:	e8 12 fc ff ff       	call   0x10116a30
10116e1e:	83 c4 04             	add    esp,0x4
10116e21:	e9 76 01 00 00       	jmp    0x10116f9c
10116e26:	ff 32                	push   DWORD PTR [edx]
10116e28:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10116e2b:	e8 60 f6 ff ff       	call   0x10116490
10116e30:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116e33:	8d 88 80 00 00 00    	lea    ecx,[eax+0x80]
10116e39:	f7 d8                	neg    eax
10116e3b:	1b c0                	sbb    eax,eax
10116e3d:	23 c1                	and    eax,ecx
10116e3f:	89 02                	mov    DWORD PTR [edx],eax
10116e41:	e9 56 01 00 00       	jmp    0x10116f9c
10116e46:	8b 32                	mov    esi,DWORD PTR [edx]
10116e48:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10116e4b:	56                   	push   esi
10116e4c:	e8 3f f6 ff ff       	call   0x10116490
10116e51:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116e54:	85 c0                	test   eax,eax
10116e56:	74 0a                	je     0x10116e62
10116e58:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
10116e5b:	89 02                	mov    DWORD PTR [edx],eax
10116e5d:	e9 3a 01 00 00       	jmp    0x10116f9c
10116e62:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
10116e68:	83 fe ff             	cmp    esi,0xffffffff
10116e6b:	0f 84 2b 01 00 00    	je     0x10116f9c
10116e71:	56                   	push   esi
10116e72:	68 fc 59 1e 10       	push   0x101e59fc
10116e77:	6a 01                	push   0x1
10116e79:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10116e7f:	83 c4 0c             	add    esp,0xc
10116e82:	e9 15 01 00 00       	jmp    0x10116f9c
10116e87:	ff 32                	push   DWORD PTR [edx]
10116e89:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10116e8c:	e8 ff f5 ff ff       	call   0x10116490
10116e91:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116e94:	89 02                	mov    DWORD PTR [edx],eax
10116e96:	e9 01 01 00 00       	jmp    0x10116f9c
10116e9b:	8b 75 1c             	mov    esi,DWORD PTR [ebp+0x1c]
10116e9e:	b8 08 00 00 00       	mov    eax,0x8
10116ea3:	ff 32                	push   DWORD PTR [edx]
10116ea5:	2b c7                	sub    eax,edi
10116ea7:	0f af f0             	imul   esi,eax
10116eaa:	03 f1                	add    esi,ecx
10116eac:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10116eaf:	e8 dc f5 ff ff       	call   0x10116490
10116eb4:	85 c0                	test   eax,eax
10116eb6:	74 10                	je     0x10116ec8
10116eb8:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
10116ebb:	8b ce                	mov    ecx,esi
10116ebd:	50                   	push   eax
10116ebe:	e8 7d 08 f0 ff       	call   0x10017740
10116ec3:	e9 d4 00 00 00       	jmp    0x10116f9c
10116ec8:	33 c0                	xor    eax,eax
10116eca:	8b ce                	mov    ecx,esi
10116ecc:	50                   	push   eax
10116ecd:	e8 6e 08 f0 ff       	call   0x10017740
10116ed2:	e9 c5 00 00 00       	jmp    0x10116f9c
10116ed7:	ff 32                	push   DWORD PTR [edx]
10116ed9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10116edc:	e8 af f5 ff ff       	call   0x10116490
10116ee1:	85 c0                	test   eax,eax
10116ee3:	74 14                	je     0x10116ef9
10116ee5:	50                   	push   eax
10116ee6:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10116eec:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116eef:	83 c4 04             	add    esp,0x4
10116ef2:	89 02                	mov    DWORD PTR [edx],eax
10116ef4:	e9 a3 00 00 00       	jmp    0x10116f9c
10116ef9:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116efc:	33 c0                	xor    eax,eax
10116efe:	89 02                	mov    DWORD PTR [edx],eax
10116f00:	e9 97 00 00 00       	jmp    0x10116f9c
10116f05:	8b 02                	mov    eax,DWORD PTR [edx]
10116f07:	89 01                	mov    DWORD PTR [ecx],eax
10116f09:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10116f0c:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10116f0f:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
10116f12:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10116f15:	e9 82 00 00 00       	jmp    0x10116f9c
10116f1a:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
10116f1e:	f3 0f 58 45 f4       	addss  xmm0,DWORD PTR [ebp-0xc]
10116f23:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
10116f27:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
10116f2c:	f3 0f 58 45 f0       	addss  xmm0,DWORD PTR [ebp-0x10]
10116f31:	f3 0f 11 41 04       	movss  DWORD PTR [ecx+0x4],xmm0
10116f36:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
10116f3b:	f3 0f 58 45 ec       	addss  xmm0,DWORD PTR [ebp-0x14]
10116f40:	f3 0f 11 41 08       	movss  DWORD PTR [ecx+0x8],xmm0
10116f45:	eb 55                	jmp    0x10116f9c
10116f47:	8b 02                	mov    eax,DWORD PTR [edx]
10116f49:	89 01                	mov    DWORD PTR [ecx],eax
10116f4b:	8b 02                	mov    eax,DWORD PTR [edx]
10116f4d:	a3 5c 10 23 10       	mov    ds:0x1023105c,eax
10116f52:	eb 48                	jmp    0x10116f9c
10116f54:	66 8b 02             	mov    ax,WORD PTR [edx]
10116f57:	66 89 01             	mov    WORD PTR [ecx],ax
10116f5a:	eb 40                	jmp    0x10116f9c
10116f5c:	8a 02                	mov    al,BYTE PTR [edx]
10116f5e:	88 01                	mov    BYTE PTR [ecx],al
10116f60:	eb 3a                	jmp    0x10116f9c
10116f62:	8b ca                	mov    ecx,edx
10116f64:	8d 71 01             	lea    esi,[ecx+0x1]
10116f67:	8a 01                	mov    al,BYTE PTR [ecx]
10116f69:	41                   	inc    ecx
10116f6a:	84 c0                	test   al,al
10116f6c:	75 f9                	jne    0x10116f67
10116f6e:	2b ce                	sub    ecx,esi
10116f70:	75 09                	jne    0x10116f7b
10116f72:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116f75:	33 c0                	xor    eax,eax
10116f77:	89 02                	mov    DWORD PTR [edx],eax
10116f79:	eb 21                	jmp    0x10116f9c
10116f7b:	52                   	push   edx
10116f7c:	ff 15 80 30 22 10    	call   DWORD PTR ds:0x10223080
10116f82:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10116f85:	83 c4 04             	add    esp,0x4
10116f88:	89 02                	mov    DWORD PTR [edx],eax
10116f8a:	eb 10                	jmp    0x10116f9c
10116f8c:	68 9c 59 1e 10       	push   0x101e599c
10116f91:	6a 04                	push   0x4
10116f93:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10116f99:	83 c4 08             	add    esp,0x8
10116f9c:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
10116f9f:	0f bf 43 0c          	movsx  eax,WORD PTR [ebx+0xc]
10116fa3:	41                   	inc    ecx
10116fa4:	3b c8                	cmp    ecx,eax
10116fa6:	89 4d 1c             	mov    DWORD PTR [ebp+0x1c],ecx
10116fa9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10116fac:	0f 8c 80 fd ff ff    	jl     0x10116d32
10116fb2:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
10116fb5:	5f                   	pop    edi
10116fb6:	5e                   	pop    esi
10116fb7:	5b                   	pop    ebx
10116fb8:	8b e5                	mov    esp,ebp
10116fba:	5d                   	pop    ebp
10116fbb:	c2 1c 00             	ret    0x1c
