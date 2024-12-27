--[[


██╗░░░░░███████╗░█████╗░██╗░░██╗███████╗██████╗░  ██████╗░██╗░░░██╗
██║░░░░░██╔════╝██╔══██╗██║░██╔╝██╔════╝██╔══██╗  ██╔══██╗╚██╗░██╔╝
██║░░░░░█████╗░░███████║█████═╝░█████╗░░██║░░██║  ██████╦╝░╚████╔╝░
██║░░░░░██╔══╝░░██╔══██║██╔═██╗░██╔══╝░░██║░░██║  ██╔══██╗░░╚██╔╝░░
███████╗███████╗██║░░██║██║░╚██╗███████╗██████╔╝  ██████╦╝░░░██║░░░
╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝╚═════╝░  ╚═════╝░░░░╚═╝░░░

██╗░░██╗██╗░░██╗░█████╗░██╗░░██╗███████╗██████╗░
██║░░██║╚██╗██╔╝██╔══██╗██║░██╔╝██╔════╝██╔══██╗
███████║░╚███╔╝░██║░░╚═╝█████═╝░█████╗░░██████╔╝
██╔══██║░██╔██╗░██║░░██╗██╔═██╗░██╔══╝░░██╔══██╗
██║░░██║██╔╝╚██╗╚█████╔╝██║░╚██╗███████╗██║░░██║
╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝ 

--]]


local free_access = loadstring(game:HttpGet("https://pastebin.com/raw/Z5HamGnQ"))() -- make it return true if delated



if free_access == true then

--[[

    ///////////////////////////////
    //  © 2022 - 2024 Affinity   //
    //    All rights reserved    //
    ///////////////////////////////
    // This material may not be  //
    //   reproduced, displayed,  //
    //  modified or distributed  //
    // without the express prior //
    // written permission of the //
    //   the copyright holder.   //
    ///////////////////////////////
    // AZURE VER 4 BY LINEMASTER //
    // Affinity by elijah.cooool //
    ///////////////////////////////

]]--



do
local getinfo = getinfo or debug.getinfo
local DEBUG = false
local Hooked = {}

local Detected, Kill

setthreadidentity(2)
--LPH_NO_VIRTUALIZE(function()
for i, v in getgc(true) do
    if typeof(v) == "table" then
        local DetectFunc = rawget(v, "Detected")
        local KillFunc = rawget(v, "Kill")
    
        if typeof(DetectFunc) == "function" and not Detected then
            Detected = DetectFunc
            
            local Old; Old = hookfunction(Detected, function(Action, Info, NoCrash)
                if Action ~= "_" then
                    if DEBUG then
                        warn(`Adonis AntiCheat flagged\nMethod: {Action}\nInfo: {Info}`)
                    end
                end
                
                return true
            end)

            table.insert(Hooked, Detected)
        end

        if rawget(v, "Variables") and rawget(v, "Process") and typeof(KillFunc) == "function" and not Kill then
            Kill = KillFunc
            local Old; Old = hookfunction(Kill, function(Info)
                if DEBUG then
                    warn(`Adonis AntiCheat tried to kill (fallback): {Info}`)
                end
            end)

            table.insert(Hooked, Kill)
        end
    end
end

local Old; Old = hookfunction(getrenv().debug.info, newcclosure(function(...)
    local LevelOrFunc, Info = ...

    if Detected and LevelOrFunc == Detected then
        if DEBUG then
            warn(`Adonis Bypassed!`)
        end

        return coroutine.yield(coroutine.running())
    end
    
    return Old(...)
end))
--end)()
-- setthreadidentity(9)
setthreadidentity(7)
end

function load()
    --// Services
    local Debris = game:GetService('Debris')
    local EtherealParts = Instance.new('Folder', workspace)
    EtherealParts.Name  = 'EtherealParts'
    local Players = game:GetService("Players")
    local UserInputService = game:GetService("UserInputService")
    local Workspace = game:GetService("Workspace")
    local Lighting = game:GetService("Lighting")
    local RunService = game:GetService("RunService")
    local TweenService = game:GetService("TweenService")
    local ReplicatedStorage = game:GetService("ReplicatedStorage")
    local CC = Workspace.CurrentCamera
    --// Variables
    local LocalPlayer = Players.LocalPlayer
    local Camera = Workspace:FindFirstChildWhichIsA("Camera")
    local Hitsounds = {}

    --// Script Table
    local Script = {
        Functions = {},
        Folders = {},
        Parts = {},
        Locals = {
            Target = nil,
            IsTargetting = false,
            Resolver = {
                OldTick = os.clock(),
                OldPos = Vector3.new(0, 0, 0),
                ResolvedVelocity = Vector3.new(0, 0, 0)
            },
            AutoSelectTick = tick(),
            AntiAimViewer = {
                MouseRemoteFound = false,
                MouseRemote = nil,
                MouseRemoteArgs = nil,
                MouseRemotePositionIndex = nil
            },
            HitEffect = {
                ["Nova Impact"] = nil,
                ["Crescent Slash"] = nil,
                ["Crescent Slash"] = nil,
                ["Coom"] = nil,
                ["Cosmic Explosion"] = nil,
                ["Slash"] = nil,
                ["Atomic Slash"] = nil,
            },
            Gun = {
                PreviousGun = nil,
                PreviousAmmo = 999,
                Shotguns = {"[Double-Barrel SG]", "[TacticalShotgun]", "[Shotgun]"}
            },
            PlayerHealth = {},
            JumpOffset = 0,
            BulletPath = {
                [4312377180] = Workspace:FindFirstChild("MAP") and Workspace.MAP:FindFirstChild("Ignored") or nil,
                [1008451066] = Workspace:FindFirstChild("Ignored") and Workspace.Ignored:FindFirstChild("Siren") and Workspace.Ignored.Siren:FindFirstChild("Radius") or nil,
                [3985694250] = Workspace and Workspace:FindFirstChild("Ignored") or nil,
                [5106782457] = Workspace and Workspace:FindFirstChild("Ignored") or nil,
                [4937639028] = Workspace and Workspace:FindFirstChild("Ignored") or nil,
                [1958807588] = Workspace and Workspace:FindFirstChild("Ignored") or nil
            },
            World = {
                FogColor = Lighting.FogColor,
                FogStart = Lighting.FogStart,
                FogEnd = Lighting.FogEnd,
                Ambient = Lighting.Ambient,
                Brightness = Lighting.Brightness,
                ClockTime = Lighting.ClockTime,
                ExposureCompensation = Lighting.ExposureCompensation
            },
            SavedCFrame = nil,
            NetworkPreviousTick = tick(),
            NetworkShouldSleep = false,
            FFlags = {
      }
            ,OriginalVelocity = {},
            RotationAngle = 0
        },
        Utility = {
            Drawings = {},
            EspCache = {}
        },
        Connections = {
            GunConnections = {}
        },
        AuraIgnoreFolder = Instance.new("Folder", game:GetService("Workspace"))
    }

    --// Settings Table
    local Settings = {
        Combat = {
            Enabled = false,
            Skibidi = false,
            AimPart = "HumanoidRootPart",
            Silent = false,
            BetaAirshot = false,
            TriggerBot = {
                Enabled = false,
                Delay = 0,
                TargeyOnly = false,
                FOV = {
                    Show = true,
                    Size = 80
                }
            },
            TargetInfo = false,
            Camera = false,
            EasingStyle = "Sine",
            EasingDirection = "Out",
            Alerts = true,
            LookAt = false,
            Spectate = false,
            PingBased = false,
            UseIndex = false,
            AntiAimViewer = false,
            AutoSelect = {
                Enabled = false,
                Cooldown = {
                    Enabled = false,
                    Amount = 0.5
                }
            },
            Checks = {
                Enabled = false,
                Knocked = false,
                Crew = false,
                Wall = false,
                Grabbed = false,
                Vehicle = false
            },
            Smoothing = {
                Horizontal = 1,
                Vertical = 1
            },
            Prediction = {
                Horizontal = 0.134,
                Vertical = 0.134
            },
            Resolver = {
                Enabled = false,
                Smoothness = 0.5
            },
            Fov = {
                Visualize = {
                    Enabled = false,
                    Color = Color3.new(1, 1, 1)
                },
                Radius = 80
            },
            Visuals = {
                Enabled = true,
                Tracer = {
                    Enabled = false,
                    Color = Color3.new(1, 1, 1),
                    Thickness = 2
                },
                Dot = {
                    Enabled = false,
                    Color = Color3.new(1, 1, 1),
                    Filled = true,
                    Size = 6
                },
                Chams = {
                    Enabled = false,
                    Fill = {
                        Color = Color3.fromRGB(255,209,220),
                        Transparency = 0.5
                    },
                    Outline = {
                        Color = Color3.new(255,255,255),
                        Transparency = 0
                    }
                }
            },
            Air = {
                Enabled = true,
                AirAimPart = {
                    Enabled = false,
                    HitPart = "LowerTorso"
                },
                JumpOffset = {
                    Enabled = false,
                    Offset = 0
                }
            }
        },
        Visuals = {
            Backtrack = {
                Enabled = true,
                Color = Color3.fromRGB(255,255,255),
                Method = "Folllow",
                Transparency = 0.5,
                Material = "Plastic",
            },
            BulletTracers = {
                Enabled = false,
                Color = {
                    Gradient1 = Color3.new(1, 1, 1),
                    Gradient2 = Color3.new(0, 0, 0)
                },
                Duration = 1,
                Fade = {
                    Enabled = false,
                    Duration = 0.5
                }
            },
            BulletImpacts = {
                Enabled = false,
                Color = Color3.new(1, 1, 1),
                Duration = 1,
                Size = 1,
                Material = "SmoothPlastic",
                Fade = {
                    Enabled = false,
                    Duration = 0.5
                }
            },
            OnHit = {
                Enabled = false,
                Effect = {
                    Enabled = false,
                    Color = Color3.new(1, 1, 1)
                },
                Sound = {
                    Enabled = false,
                    Volume = 5,
                    Value = "hentai4.wav"
                },
                Chams = {
                    Enabled = false,
                    Color = Color3.fromRGB(255,209,220),
                    Material = "ForceField",
                    Duration = 1
                }
            },
            World = {
                Enabled = false,
                Fog = {
                    Enabled = false,
                    Color = Color3.fromRGB(255,209,220),
                    End = 1000,
                    Start = 10000
                },
                Ambient = {
                    Enabled = false,
                    Color = Color3.fromRGB(255,209,220)
                },
                Brightness = {
                    Enabled = false,
                    Value = 0
                },
                ClockTime = {
                    Enabled = false,
                    Value = 24
                },
                WorldExposure = {
                    Enabled = false,
                    Value = -0.1
                }
            },
            Crosshair = {
                Enabled = false,
                StickToTarget = false,
                Color = Color3.new(1, 1, 1),
                Size = 10,
                Gap = 2,
                Rotation = {
                    Enabled = false,
                    Speed = 1
                }
            }
        },
        AntiAim = {
            DaCoolBoyDesync = false,
            DaCoolBoyDesync2 = false,
            DaCoolBoyDesync3 = false,
            VelocitySpoofer = {
                Enabled = false,
                Visualize = {
                    Enabled = false,
                    Color = Color3.fromRGB(255,209,220),
                    Prediction = 0.134
                },
                Type = "Underground",
                Roll = 0,
                Pitch = 0,
                Yaw = 0
            },
            CSync = {
                Enabled = false,
                Spoof = false,
                Type = "Target Strafe",
                Visualize = {
                    Enabled = false,
                    Color = Color3.fromRGB(255,209,220)
                },
                RandomDistance = 10,
                Custom = {
                    X = 0,
                    Y = 0,
                    Z = 0
                },
                TargetStrafe = {
                    Speed = 1,
                    Distance = 1,
                    Height = 1
                }
            },
            Network = {
                Enabled = false,
                WalkingCheck = false,
                Amount = 0.05
            },
            VelocityDesync = {
                Enabled = false,
                Range = 1
            },
            FFlagDesync = {
                Enabled = false,
                SetNew = false,
                FFlags = {"S2PhysicsSenderRate"}, 
                SetNewAmount = 1,
                Amount = 1
            },
        },
        Misc = {
            Movement = {
                Macro = {
                    Enabled = false,
                    Speed = 0.1,
                },
                Speed = {
                    Enabled = false,
                    Amount = 1
                },
            },
            Exploits = {
                Enabled = false,
                NoRecoil = false,
                NoJumpCooldown = false,
                NoSlowDown = false
            }
        }
    }

getgenv().taffy_esp = {
    enabled = false,
    box = {
        boxes = false,
        boxtype = "2D",
        filled = false,
        filledColor = Color3.fromRGB(255, 255, 255),
        outline = false,
        healthbar = false,
        healthtext = false,
        healthtextcolor = Color3.new(255, 255, 255),
        color1 = Color3.fromRGB(255, 255, 255),
        color2 = Color3.fromRGB(0, 0, 0),
        healthbarcolor = Color3.fromRGB(0, 255, 0)
    },
    tracer = {
        enabled = false,
        unlocktracers = false,
        color = Color3.fromRGB(255, 255, 255)
    },
    name = {
        enabled = false,
        outline = false,
        size = 16.6,
        font = 2,
        color = Color3.fromRGB(255, 255, 255)
    },
    misc = {
        teamcheck = false,
        useteamcolors = false,
        visibleonly = true,
        target = false,
        fade = false,
        fadespeed = 4
    },  
    Toolsshow = {
        enable = false,
        outline = false,
        size = 8,
        font = 3,
        color = Color3.fromRGB(255, 255, 255)
    },
    Skeletons = {
        Enabled = false,
        Color = Color3.new(255, 255, 255)
    }
}

do
local Esp = {}
local ThreeDrawingLibrary = loadstring(game:HttpGet("https://pastebin.com/raw/QVJPXgfV"))()
local RunService = game:GetService("RunService")
local Client = game:GetService("Players").LocalPlayer


function Esp:Esp(v)
    local bones = {
        {"Head", "UpperTorso"},
        {"UpperTorso", "RightUpperArm"},
        {"RightUpperArm", "RightLowerArm"},
        {"RightLowerArm", "RightHand"},
        {"UpperTorso", "LeftUpperArm"},
        {"LeftUpperArm", "LeftLowerArm"},
        {"LeftLowerArm", "LeftHand"},
        {"UpperTorso", "LowerTorso"},
        {"LowerTorso", "LeftUpperLeg"},
        {"LeftUpperLeg", "LeftLowerLeg"},
        {"LeftLowerLeg", "LeftFoot"},
        {"LowerTorso", "RightUpperLeg"},
        {"RightUpperLeg", "RightLowerLeg"},
        {"RightLowerLeg", "RightFoot"}
    }

    function lerp(a, b, t)
        return a + (b - a) * t
    end

    local function fade(drawObject)
        local currentAlpha = drawObject.Transparency
        local lerpAlpha = taffy_esp.misc.fadespeed * 0.05

        if taffy_esp.misc.fade then
            local oscillation = (math.sin(tick() * taffy_esp.misc.fadespeed) + 1) / 2
            drawObject.Transparency = lerp(currentAlpha, oscillation, lerpAlpha)
        else
            drawObject.Transparency = 1
        end
    end
    
    local function fadeFill(drawObject)
        local currentAlpha = drawObject.Transparency
        local lerpAlpha = taffy_esp.misc.fadespeed * 0.05
    
        if taffy_esp.misc.fade then
            local oscillation = (math.sin(tick() * taffy_esp.misc.fadespeed) + 1) / 2
            local newAlpha = lerp(currentAlpha, oscillation, lerpAlpha)
            drawObject.Transparency = math.min(newAlpha, 0.3)
        else
            drawObject.Transparency = 0.3
        end
    end
    
    local BLOCKOUTLINE = nil
    local BOXPLAYER = nil
    local FILLEDBOXPLAYER = nil
    local HealthBarBackground = nil
    local HealthBarITSELF = nil
    local Cube = nil
    local HealthText = nil
    local Tracer = nil
    local Name = nil
    local toolshow = nil
    local SkeletonLines = {}
    
    RunService.RenderStepped:Connect(function()
        if v.Character ~= nil and v.Character:FindFirstChild("Humanoid") ~= nil and v.Character:FindFirstChild("HumanoidRootPart") ~= nil and v ~= Client and v.Character.Humanoid.Health > 0 and (not taffy_esp.misc.teamcheck or v.TeamColor == Client.TeamColor) and v.Character:FindFirstChild("Head") ~= nil and taffy_esp.enabled then
            local Vector, onScreen = game:GetService("Workspace").CurrentCamera:worldToViewportPoint(v.Character.HumanoidRootPart.Position)
            
            if onScreen then
                local RootPart = v.Character.HumanoidRootPart
                local Head = v.Character.Head
                local RootPosition, RootVis = game:GetService("Workspace").CurrentCamera:worldToViewportPoint(RootPart.Position)
                local HeadPosition = game:GetService("Workspace").CurrentCamera:worldToViewportPoint(Head.Position + Vector3.new(0, 1.3, 0))
                local LegPosition = game:GetService("Workspace").CurrentCamera:worldToViewportPoint(RootPart.Position - Vector3.new(0, 3.6, 0))

                if not taffy_esp.misc.target or v == Script.Locals.Target and Script.Locals.IsTargetting then
                    if taffy_esp.box.boxes and taffy_esp.enabled then
                        if taffy_esp.box.boxtype == "2D" then
                            local height = HeadPosition.Y - LegPosition.Y
                            local yOffset = 0
                            local centerHeight = LegPosition.Y + height / 2
                            local boxSize = Vector2.new(2700 / RootPosition.Z, height)
                            local boxPosition = Vector2.new(RootPosition.X - boxSize.X / 2, centerHeight - boxSize.Y / 2 + yOffset)
                    
                            
                            if not BLOCK then
                                BLOCKOUTLINE = Drawing.new("Square")
                                BLOCKOUTLINE.Visible = false
                                BLOCKOUTLINE.Color = Color3.new(0, 0, 0)
                                BLOCKOUTLINE.Thickness = 3
                                BLOCKOUTLINE.Transparency = 1
                                BLOCKOUTLINE.Filled = false
                            end
                    
                            if BLOCKOUTLINE then
                                BLOCKOUTLINE.Size = boxSize
                                BLOCKOUTLINE.Position = boxPosition
                                BLOCKOUTLINE.Visible = taffy_esp.box.outline
                                BLOCKOUTLINE.Transparency = 0
                                BLOCKOUTLINE.Color = taffy_esp.box.color2
  
