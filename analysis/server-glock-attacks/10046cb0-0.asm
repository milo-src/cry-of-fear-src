
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10046cb0 <.text+0x45cb0>:
10046cb0:	56                   	push   esi
10046cb1:	68 20 dd 1a 10       	push   0x101add20
10046cb6:	8b f1                	mov    esi,ecx
10046cb8:	e8 d3 fc 0c 00       	call   0x10116990
10046cbd:	68 0c 07 1b 10       	push   0x101b070c
10046cc2:	e8 c9 fc 0c 00       	call   0x10116990
10046cc7:	68 f4 9a 1a 10       	push   0x101a9af4
10046ccc:	e8 bf fc 0c 00       	call   0x10116990
10046cd1:	8b 86 6c 01 00 00    	mov    eax,DWORD PTR [esi+0x16c]
10046cd7:	83 c4 0c             	add    esp,0xc
10046cda:	85 c0                	test   eax,eax
10046cdc:	74 09                	je     0x10046ce7
10046cde:	50                   	push   eax
10046cdf:	e8 5c fc 0c 00       	call   0x10116940
10046ce4:	83 c4 04             	add    esp,0x4
10046ce7:	8b 86 70 01 00 00    	mov    eax,DWORD PTR [esi+0x170]
10046ced:	85 c0                	test   eax,eax
10046cef:	74 09                	je     0x10046cfa
10046cf1:	50                   	push   eax
10046cf2:	e8 49 fc 0c 00       	call   0x10116940
10046cf7:	83 c4 04             	add    esp,0x4
10046cfa:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
10046d00:	85 c9                	test   ecx,ecx
10046d02:	74 16                	je     0x10046d1a
10046d04:	8b 01                	mov    eax,DWORD PTR [ecx]
10046d06:	ff 50 20             	call   DWORD PTR [eax+0x20]
10046d09:	85 c0                	test   eax,eax
10046d0b:	74 0d                	je     0x10046d1a
10046d0d:	68 58 07 1b 10       	push   0x101b0758
10046d12:	e8 79 fc 0c 00       	call   0x10116990
10046d17:	83 c4 04             	add    esp,0x4
10046d1a:	68 28 b5 1a 10       	push   0x101ab528
10046d1f:	e8 6c fc 0c 00       	call   0x10116990
10046d24:	68 10 ec 1a 10       	push   0x101aec10
10046d29:	89 86 fc 01 00 00    	mov    DWORD PTR [esi+0x1fc],eax
10046d2f:	e8 5c fc 0c 00       	call   0x10116990
10046d34:	68 3c b5 1a 10       	push   0x101ab53c
10046d39:	e8 f2 fc 0c 00       	call   0x10116a30
10046d3e:	68 80 07 1b 10       	push   0x101b0780
10046d43:	e8 e8 fc 0c 00       	call   0x10116a30
10046d48:	68 20 df 1a 10       	push   0x101adf20
10046d4d:	e8 de fc 0c 00       	call   0x10116a30
10046d52:	68 a8 df 1a 10       	push   0x101adfa8
10046d57:	e8 d4 fc 0c 00       	call   0x10116a30
10046d5c:	68 a0 07 1b 10       	push   0x101b07a0
10046d61:	e8 ca fc 0c 00       	call   0x10116a30
10046d66:	68 c4 07 1b 10       	push   0x101b07c4
10046d6b:	e8 c0 fc 0c 00       	call   0x10116a30
10046d70:	68 e8 07 1b 10       	push   0x101b07e8
10046d75:	e8 b6 fc 0c 00       	call   0x10116a30
10046d7a:	68 08 08 1b 10       	push   0x101b0808
10046d7f:	e8 ac fc 0c 00       	call   0x10116a30
10046d84:	68 28 08 1b 10       	push   0x101b0828
10046d89:	e8 a2 fc 0c 00       	call   0x10116a30
10046d8e:	83 c4 2c             	add    esp,0x2c
10046d91:	5e                   	pop    esi
10046d92:	c3                   	ret
